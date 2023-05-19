
#ifndef LEETCODE_UTIL_H
#define LEETCODE_UTIL_H
#include <bits/stdc++.h>
using namespace std;

class ThreadPool {
public:
    ThreadPool(size_t);
    template<class F, class... Args>
    auto enqueue(F&& f, Args&&... args)
    -> std::future<typename std::result_of<F(Args...)>::type>;
    ~ThreadPool();
private:
    std::vector<std::thread> workers; // 存储工作线程
    std::queue<std::function<void()>> tasks; // 任务队列
    std::atomic<bool> stop; // 原子布尔值，表示线程池是否停止
    std::mutex queue_mutex; // 队列互斥锁
    std::condition_variable condition; // 用于等待/通知任务的条件变量
};

ThreadPool::ThreadPool(size_t threads) : stop(false) { // 构造函数
    for (size_t i = 0; i < threads; ++i)
        workers.emplace_back( // 创建工作线程
                [this] { // 捕获 this 指针，以访问线程池成员
                    for (;;) {
                        std::function<void()> task; // 定义任务函数对象
                        {
                            std::unique_lock<std::mutex> lock(this->queue_mutex); // 锁定任务队列
                            this->condition.wait(lock, // 等待新的任务或线程池停止
                                                 [this] { return this->stop || !this->tasks.empty(); });
                            if (this->stop && this->tasks.empty()) // 线程池要停止，且没有任务时返回
                                return;
                            task = std::move(this->tasks.front()); // 获取任务
                            this->tasks.pop(); // 从任务队列中移除任务
                        }
                        task(); // 执行任务
                    }
                }
        );
}

template<class F, class... Args>
auto ThreadPool::enqueue(F&& f, Args&&... args)
-> std::future<typename std::result_of<F(Args...)>::type> {
    using return_type = typename std::result_of<F(Args...)>::type; // 获取任务返回类型
    auto task = std::make_shared<std::packaged_task<return_type()> >(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...) // 使用 std::bind 包装任务
    );
    std::future<return_type> res = task->get_future(); // 获取任务的 std::future 对象
    {
        std::unique_lock<std::mutex> lock(queue_mutex); // 锁定任务队列
        if (stop) // 如果线程池已停止，抛出异常
            throw std::runtime_error("enqueue on stopped ThreadPool");
        tasks.emplace([task]() { (*task)(); }); // 将任务添加到任务队列
    }
    condition.notify_one(); // 通知一个等待的工作线程
    return res;
}

ThreadPool::~ThreadPool() { // 析构函数
    stop = true; // 设置 stop 为 true
    condition.notify_all(); // 通知所有等待的线程
    for (std::thread& worker : workers) // 对于每个工作线程
        worker.join(); // 等待线程完成
}


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//Definition for singly - linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

template<typename T>
auto  buildListNode(string input) -> pair<T*,T*> {
    input = input.substr(1);
    input.pop_back();
    string str;
    vector<int> nums;
    for(const auto& c : input) {
        if(c == ','){
            nums.emplace_back(stoi(str));
            str.clear();
        }
        else str += c;
    }
    nums.emplace_back(stoi(str));
    T* a = new T(nums[0]);
    T* temp = a;
    for (int i = 1; i < nums.size(); i++) {
        temp->next = new T(nums[i]);
        temp = temp->next;
    }
    return {a,temp};
}

auto buildTree(std::string&& input) -> TreeNode*
{
	input.pop_back();
	input.erase(input.begin());
	int len = input.size();
	int pos = 0;
	int nodePos = 0;
	std::vector<TreeNode*> nodes(2*len + 1, nullptr);
	std::string temp;
	while (1) {
		temp.clear();
		while (pos < len) {
			if (input[pos] != ',') {
				temp += input[pos++];
			}
			else {
				++pos;
				break;
			}
		}
		if (!temp.empty()) {
			if (temp == "null") {
				++nodePos;
				continue;
			}
			else {
				int val = std::stoi(temp);
				nodes[nodePos + 1] = new TreeNode(val);
				++nodePos;
			}
		}
		else break;
	}
	for (int i = 1; i < len + 1; ++i) {
		if (nodes[i]) {
			nodes[i]->left = nodes[i * 2];
			nodes[i]->right = nodes[i * 2 + 1];
		}
	}
	return nodes[1];
}

#endif //LEETCODE_UTIL_H
