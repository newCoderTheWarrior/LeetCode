//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//using namespace std;
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//ListNode* buildListNode(vector<int> nums) {
//    ListNode* a = new ListNode(nums[0]);
//    ListNode* temp = a;
//    for (int i = 1; i < nums.size(); i++) {
//        temp->next = new ListNode(nums[i]);
//        temp = temp->next;
//    }
//    return a;
//}
//
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        if (!head || !head->next) return true;
//        ListNode* fast = head;
//        ListNode* slow = head;
//        int count = 0;
//        while (fast != nullptr) {
//            fast = fast->next;
//            ++count;
//            if (count % 2 == 0) {
//                slow = slow->next;
//            }
//        }
//        ListNode* pre = new ListNode(0);
//        pre->next = slow;
//        while (slow != nullptr) {
//            cout << slow->val << " ";
//            ListNode* nextListNode = slow->next;
//            slow->next = pre;
//            pre = slow;
//            slow = nextListNode;
//        }
//        return false;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.isPalindrome(buildListNode({ 1, 2, 2, 1 }));
//}