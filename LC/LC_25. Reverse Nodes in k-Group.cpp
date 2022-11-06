//
// Created by WuFenghong on 2022/11/4.
//
#include"../util.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int x = 100;
    ListNode* reverseListNode(ListNode* head) {
        if(!head || !head->next) return head;
        auto ans = reverseListNode(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        auto dummy = new ListNode(0);
        auto preTail = dummy, subHead = head, subTail = head, nextHead = head;
        while(nextHead) {
            int count = 1;
            subHead = nextHead;
            subTail = subHead;
            while(subTail->next && count < k) {
                subTail = subTail->next;
                ++count;
            }
            nextHead = subTail->next;
            subTail->next = nullptr;
            preTail->next = reverseListNode(subHead);
            preTail = subHead;
        }
        return dummy->next;
    }
};

void f2(){
    cout << "friend function of B" << endl;
}

class B{
private:
    friend void f2();
    virtual void f(){
        cout << "private vf" << endl;
    }
public:
    void func(){
        f2();
        f();
        f1();
    }
protected:
    virtual void f1(){
        cout << "protected vf" << endl;
    }
};

class A:public B{
protected:
    virtual void f1(){
        cout << "A's protected vf" << endl;
    }
};

class C{
private:
    int num1;
public:
    int num2;
    C(){
        num1 = 100;
        num2 = 1000;
    }
    void display(){
        cout << "num1 is " << num1 << endl;
        cout << "num2 is " << num2 << endl;
    }
};

mutex mt;
int num = 0;
void f3(){
    for(int i = 0; i < 100; ++i) {
        {
            unique_lock<mutex> lock(mt);
            if (num > 0) {
                cout << "consume num " << i << " product, left " << --num << " products" << endl;
            }
        }
        this_thread::sleep_for(chrono::seconds(1));
    }
}

void f4(){
    for(int i = 0; i < 100; ++i) {
        {
            unique_lock<mutex> lock(mt);
            if (num < 100) {
                cout << "generate num " << i << " product, left " << ++num << " products" << endl;
            }
        }
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main(){
    thread t1(f4);
    thread t2(f3);
    t1.join();
    t2.join();
    C c;
    c.display();
    int *p = (int*)&c;
    *p = 1000;
    c.display();
    p = &c.num2;
    --p;
    *p = 10000;
    c.display();
    A obj;
    thread t(&A::func,&obj);
    t.join();
    obj.func();
    int a = 0x0105;
    cout << a << endl;
    cout << (int)*(char*)&a;
//    string s = "[1,2,3,4,5]";
//    auto head = buildListNode<ListNode>(s);
//    Solution so;
//    so.reverseKGroup(head.first,2);
}