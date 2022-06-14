//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<queue>
//using namespace std;
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
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> ans;
//        if (root == nullptr) return ans;
//        vector<int> temp;
//        temp.push_back(root->val);
//        ans.push_back(temp);
//        q.push(root->left);
//        q.push(root->right);
//        int count = 0;
//        int n = q.size();//2
//        temp.clear();
//        while (n >= 0) {
//            temp.push_back((q.front())->val);
//            if ((q.front())->left != nullptr)
//                q.push((q.front())->left);
//            if ((q.front())->right != nullptr)
//                q.push((q.front())->right);
//            q.pop();
//            count++;
//            if (count == n) {
//                ans.push_back(temp);
//                temp.clear();
//                count = 0;
//                n = q.size();
//            }
//        }
//        return ans;
//    }
//
//    queue<TreeNode*> q;
//};
//
//int main()
//{
//    TreeNode* root = new TreeNode(3, 
//        new TreeNode(9), new TreeNode(20, 
//                        new TreeNode(15), new TreeNode(7)));
//    Solution s;
//    s.levelOrder(root);
//}