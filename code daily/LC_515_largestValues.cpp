//
// Created by WuFenghong on 2022/6/24.
//
#include "../util.h"

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
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<TreeNode*> q;
        q.emplace(root);
        while(!q.empty()){
            queue<TreeNode*> temp;
            int maxNum = INT_MIN;
            while(!q.empty()){
                auto node = q.front();
                maxNum = maxNum < node->val ? node->val : maxNum;
                if(node->left) temp.emplace(node->left);
                if(node->right) temp.emplace(node->right);
                q.pop();
            }
            ans.emplace_back(maxNum);
            q = std::move(temp);
        }
        return ans;
    }
};