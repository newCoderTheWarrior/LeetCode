//
// Created by WuFenghong on 2022/6/13.
//
#include <bits/stdc++.h>
#include "JZOF/JZ_2_2_AddBinary.h"
#include "code daily/LC_338_CountBits.h"
#include "code daily/LC_498_FindDiagonalOrder.h"
#include "util.h"

using namespace std;

class A{
public:
    void func(){
        cout<<"A"<<endl;
    }
};

class B : public A{
public:
    void func(){
        return;
    }
};

class Test{
public:
    vector<int> v;
    Test(initializer_list<int> l){
        v = std::move(vector(l.begin(),l.end()));
    }
};
bool func(int num){return true;}


auto func(auto a, auto b, auto sum) {
    for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.count([&](auto r){
            return (*it) % 2 == 0 ?  (*it)/2 : (*it)/2 + 1;
        }(*it))) {
            for(const auto& [key,val] : b[*it]) {
                sum += [](auto num){
                    return func(num);
                }(val) ? key : -1;
            }
        }
    }
    return sum;
}

/*
["MovingAverage","next","next","next","next","next","next","next","next","next","next"]
[[5],[12009],[1965],[-940],[-8516],[-16446],[7870],[25545],[-21028],[18430],[-23464]]
*/

int main(){
    ThreadPool pool(4); // 创建一个有 4 个线程的线程池
    std::vector<std::future<int>> results; // 存储任务的 std::future 对象

    for (int i = 0; i < 8; ++i) {
        results.emplace_back(pool.enqueue([i] { // 将任务添加到线程池
            std::cout << "Task " << i << " start" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1)); // 模拟任务计算
            std::cout << "Task " << i << " end" << std::endl;
            return i * i; // 返回计算结果
        }));
    }

    for (auto && result : results)
        std::cout << result.get() << ' ';
    std::cout << std::endl;

    return 0;
}