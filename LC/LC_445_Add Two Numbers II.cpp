//
// Created by WuFenghong on 2022/6/16.
//
#include <bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1->val == 0 || l2->val == 0) return l1->val == 0 ? l2 : l1;
        stack<ListNode*> s1, s2;
        auto size1 = 0, size2 = 0;
        auto temp = l1;
        while (temp) {
            s1.push(temp);
            temp = temp->next;
            ++size1;
        }
        temp = l2;
        while (temp) {
            s2.push(temp);
            temp = temp->next;
            ++size2;
        }
        if (size1 > size2) {
            auto carry = 0;
            while (!s2.empty()) {
                auto p1 = s1.top(), p2 = s2.top();
                auto sum = p1->val + p2->val + carry;
                if (sum > 9) {
                    p1->val = sum - 10;
                    carry = 1;
                }
                else {
                    p1->val = sum;
                    carry = 0;
                }
                s1.pop();
                s2.pop();
            }
            while (carry != 0 && !s1.empty()) {
                auto p = s1.top();
                auto sum = p->val + carry;
                if (sum > 9) {
                    p->val = sum - 10;
                    carry = 1;
                }
                else {
                    p->val = sum;
                    carry = 0;
                }
                s1.pop();
            }
            if (carry != 0) {
                ListNode* ans = new ListNode(1);
                ans->next = l1;
                return ans;
            }
            return l1;
        }
        else {
            auto carry = 0;
            while (!s1.empty()) {
                auto p1 = s2.top(), p2 = s1.top();
                auto sum = p1->val + p2->val + carry;
                if (sum > 9) {
                    p1->val = sum - 10;
                    carry = 1;
                }
                else {
                    p1->val = sum;
                    carry = 0;
                }
                s1.pop();
                s2.pop();
            }
            while (carry != 0 && !s2.empty()) {
                auto p = s2.top();
                auto sum = p->val + carry;
                if (sum > 9) {
                    p->val = sum - 10;
                    carry = 1;
                }
                else {
                    p->val = sum;
                    carry = 0;
                }
                s2.pop();
            }
            if (carry != 0) {
                ListNode* ans = new ListNode(1);
                ans->next = l2;
                return ans;
            }
            return l2;
        }
    }
};