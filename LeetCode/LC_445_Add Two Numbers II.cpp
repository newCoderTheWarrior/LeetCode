#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<unordered_map>
#include<stack>
#include<map>
#include<functional>
#include<queue>
using namespace std;

 //Definition for singly - linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* buildListNode(vector<int> nums) {
    ListNode* a = new ListNode(nums[0]);
    ListNode* temp = a;
    for (int i = 1; i < nums.size(); i++) {
        temp->next = new ListNode(nums[i]);
        temp = temp->next;
    }
    return a;
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1->val == 0 || l2->val == 0) return l1->val == 0 ? l2 : l1;
        stack<ListNode*> s1, s2;
        auto size1 = 0, size2 = 0;
        auto temp = l1;
        while (temp) {
            s1.push(temp);
            ++size1;
        }
        temp = l2;
        while (temp) {
            s2.push(temp);
            ++size2;
        }
        if (size1 > size2) {
            auto carry = 0;
            while (!s2.empty()) {
                auto p1 = s1.top(), p2 = s2.top();
                auto sum = p1->val + p2->val + carry;
                switch (sum) {
                case 0: {
                    carry = 0;
                    p1->val = 0;
                    break;
                }
                case 1: {
                    carry = 0;
                    p1->val = 1;
                    break;
                }
                case 2: {
                    carry = 1;
                    p1->val = 0;
                    break;
                }
                case 3: {
                    carry = 1;
                    p1->val = 1;
                    break;
                }
                }
                s1.pop();
                s2.pop();
            }
            while (carry != 0 && !s1.empty()) {
                auto p = s1.top();
                auto sum = p->val + carry;
                switch (sum) {
                case 0: {
                    p->val = 0;
                    carry = 0;
                    break;
                }
                case 1: {
                    p->val = 1;
                    carry = 0;
                    break;
                }
                case 2: {
                    p->val = 0;
                    carry = 1;
                }
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
                switch (sum) {
                case 0: {
                    carry = 0;
                    p1->val = 0;
                    break;
                }
                case 1: {
                    carry = 0;
                    p1->val = 1;
                    break;
                }
                case 2: {
                    carry = 1;
                    p1->val = 0;
                    break;
                }
                case 3: {
                    carry = 1;
                    p1->val = 1;
                    break;
                }
                }
                s1.pop();
                s2.pop();
            }
            while (carry != 0 && !s2.empty()) {
                auto p = s2.top();
                auto sum = p->val + carry;
                switch (sum) {
                case 0: {
                    p->val = 0;
                    carry = 0;
                    break;
                }
                case 1: {
                    p->val = 1;
                    carry = 0;
                    break;
                }
                case 2: {
                    p->val = 0;
                    carry = 1;
                }
                }
                s1.pop();
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


int main()
{
   
}