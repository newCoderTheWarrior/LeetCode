//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
// 
//class Solution {
//public:
//    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//        traversal(root, 0, targetSum);
//        return ans;
//    }
//
//    void traversal(TreeNode*& root, int preThere, int targetSum)
//    {
//        if (root == nullptr) return;
//        aid.push_back(root->val);
//        root->val += preThere;
//        if ((root->val == targetSum) && (root->left == nullptr) && (root->right == nullptr)) {
//            ans.push_back(aid);
//            aid.pop_back();
//            return;
//        }
//        else {
//            if ((root->left != nullptr) || (root->right != nullptr)) {
//                if (root->left != nullptr) {
//                    traversal(root->left, root->val, targetSum);
//                }
//                if (root->right != nullptr) {
//                    traversal(root->right, root->val, targetSum);
//                }
//                aid.pop_back();
//            }
//            else {
//                
//                aid.pop_back();
//                return;
//            }
//        }
//    }
//
//    vector<int> aid;
//    vector<vector<int>> ans;
//};
//
//int main()
//{
//    TreeNode* root = new TreeNode(1,
//        new TreeNode(-2, 
//            new TreeNode(1, 
//                new TreeNode(-1), 
//                NULL), 
//            new TreeNode(3)),
//        new TreeNode(-3, 
//            new TreeNode(-2), 
//            nullptr)
//    );
//    Solution s;
//    s.pathSum(root, -1);
//}
