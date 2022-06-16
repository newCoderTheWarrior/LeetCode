//
// Created by WuFenghong on 2022/6/16.
//
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//recursively
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* ans = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
};
//iteratively
class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        auto dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* cur = head;
        while(cur) {
            ListNode* post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }
        dummy->next->next = nullptr;
        return pre;
    }
};