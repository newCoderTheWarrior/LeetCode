//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
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
//    ListNode* addInList(ListNode* head1, ListNode* head2) {
//        // write code here
//        vector<ListNode*> a;
//        vector<ListNode*> b;
//        ListNode* temp1 = head1;
//        ListNode* temp2 = head2;
//        while (temp1 != nullptr) {
//            a.push_back(temp1);
//            temp1 = temp1->next;
//        }
//        while (temp2 != nullptr) {
//            b.push_back(temp2);
//            temp2 = temp2->next;
//        }
//        int m = a.size();
//        int n = b.size();
//        int carry = 0;
//        if (m >= n) {
//            for (int i = 0; i < n; i++) {
//                a[m - 1 - i]->val += b[n - 1 - i]->val + carry;
//                if (a[m - 1 - i]->val > 9) {
//                    carry = 1;
//                    (a[m - 1 - i]->val) -= 10;
//                }
//                else carry = 0;
//            }
//            if (carry == 0) return a[0];
//            else {
//                int i = m - 1 - n;
//                while (carry != 0 && i >= 0) {
//                    a[i]->val += carry;
//                    if (a[i]->val > 9) {
//                        carry = 1;
//                        a[i]->val -= 10;
//                    }
//                    else carry = 0;
//                    i--;
//                }
//                if (carry != 0) {
//                    ListNode* temp = new ListNode(1);
//                    temp->next = a[0];
//                    return temp;
//                }
//                return a[0];
//            }
//        }
//        else {
//            for (int i = 0; i < m; i++) {
//                b[n - 1 - i]->val += a[m - 1 - i]->val + carry;
//                if (b[n - 1 - i]->val > 9) {
//                    carry = 1;
//                    (b[n - 1 - i]->val) -= 10;
//                }
//                else carry = 0;
//            }
//            if (carry == 0) return b[0];
//            else {
//                int i = n - 1 - m;
//                while (carry != 0 && i >= 0) {
//                    b[i]->val += carry;
//                    if (b[i]->val > 9) {
//                        carry = 1;
//                        b[i]->val -= 10;
//                    }
//                    else carry = 0;
//                    i--;
//
//                }
//                if (carry != 0) {
//                    ListNode* temp = new ListNode(1);
//                    temp->next = b[0];
//                    return temp;
//                }
//                return b[0];
//            }
//        }
//    }
//};
///*[4,6,0,2,6,6,3,6,3,0,7,8,0,4,1,7,0,5,6,5,2,4,9,9,1,5,1,5]
//[6,2,7,8,6,4,7,0,9,3,0,3,6,2,5,6,0,9,6,2,7,4,2,7,1,0,9,0,5,6,5,4,9,1,8,9,3,4,0,2,1,8,8,2,2,0]
//[6,2,7,8,6,4,7,0,9,3,0,3,6,2,5,6,0,1,0,8,7,6,9,3,4,7,2,1,3,4,5,9,0,8,9,4,9,9,2,7,1,7,9,7,3,5]*/
//
//int main()
//{
//    ListNode* a = new ListNode(4,
//        new ListNode(6,
//            new ListNode(0,
//                new ListNode(2,
//                    new ListNode(6,
//                        new ListNode(6,
//                            new ListNode(3,
//                                new ListNode(6,
//                                    new ListNode(3,
//                                        new ListNode(0,
//                                            new ListNode(7,
//                                                new ListNode(8,
//                                                    new ListNode(0,
//                                                        new ListNode(4,
//                                                            new ListNode(1,
//                                                                new ListNode(7,
//                                                                    new ListNode(0,
//                                                                        new ListNode(5,
//                                                                            new ListNode(6,
//                                                                                new ListNode(5,
//                                                                                    new ListNode(2,
//                                                                                        new ListNode(4,
//                                                                                            new ListNode(9,
//                                                                                                new ListNode(9,
//                                                                                                    new ListNode(1,
//                                                                                                        new ListNode(5,
//                                                                                                            new ListNode(1,
//                                                                                                                new ListNode(5))))))))))))))))))))))))))));
//    Solution s;
//    s.addInList(buildListNode({ 4,6,0,2,6,6,3,6,3,0,7,8,0,4,1,7,0,5,6,5,2,4,9,9,1,5,1,5 }), buildListNode({ 6,2,7,8,6,4,7,0,9,3,0,3,6,2,5,6,0,9,6,2,7,4,2,7,1,0,9,0,5,6,5,4,9,1,8,9,3,4,0,2,1,8,8,2,2,0 }));
//}