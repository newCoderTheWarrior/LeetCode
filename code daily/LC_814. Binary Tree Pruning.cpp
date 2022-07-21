//
// Created by WuFenghong on 2022/7/21.
//
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
    TreeNode* pruneTree(TreeNode* root) {
        if(!containOne(root)){
            if(root) delete root;
            root = nullptr;
        }
        return root;
    }
    bool containOne(TreeNode*t){
        if(!t) return false;
        bool left = containOne(t->left);
        bool right = containOne(t->right);

        if(!left){
            if(t->left) delete t->left;
            t->left = nullptr;
        }
        if(!right){
            if(t->right) delete t->right;
            t->right = nullptr;
        }
        return t->val == 1 || left || right;
    }
};