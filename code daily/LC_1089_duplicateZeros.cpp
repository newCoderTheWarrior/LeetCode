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



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

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
    void duplicateZeros(vector<int>& arr) {
        int m = arr.size(), low = 0, high = m - 1, count = 0;
        for (low = 0; low < high; ++low) {
            if (arr[low] == 0) {
                ++count;
                --high;
            }
        }
        if (high == m - 1) return;
        if (arr[low] == 0) ++count;
        auto seat = m - high - 1;
        low = high, high = m - 1;
        while (low >= 0 && high >= 0) {
            arr[high] = arr[low];
            if (arr[low] == 0) {
                if (count <= seat) {
                    --high;
                    if (high >= 0)
                        arr[high] = arr[low];
                }
                else --count;
            }
            --high;
            --low;
        }
        return;
    }
};

int main()
{
    int a = 0;
    a += ++a + a++;
    cout << a;
    vector v{9,0,9,0,6,0,0,0,1,1,6,5,4,4,8,3,0,0,0,1,5,3,0,0,7,2,1,0,2,0,9,1,0,2,0,0,0,0,0,0,0,6,0,0,7,9,0,8,7,0,9,7,1,0,2,0,0,0,0,9,0,0,0,0};
    Solution s;
    s.duplicateZeros(v);
}