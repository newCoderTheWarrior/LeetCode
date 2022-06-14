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
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//
//
//class Solution {
//public:
//    vector<vector<int> > threeOrders(TreeNode* root) {
//        // write code here
//        vector<vector<int>> ans;
//        for (int i = 0; i < 3; i++) {
//            vector<int> temp;
//            ans.push_back(temp);
//        }
//        if (root == nullptr) return ans;
//        first(root, ans[0]);
//        second(root, ans[1]);
//        third(root, ans[2]);
//        return ans;
//    }
//
//    int first(TreeNode* root, vector<int>& vec) {
//        if (root == nullptr) return 0;
//        vec.push_back(root->val);
//        first(root->left, vec);
//        first(root->right, vec);
//        return 0;
//    }
//
//    int second(TreeNode* root, vector<int>& vec) {
//        if (root == nullptr) return 0;
//        first(root->left, vec);
//        vec.push_back(root->val);
//        first(root->right, vec);
//        return 0;
//    }
//
//    int third(TreeNode* root, vector<int>& vec) {
//        if (root == nullptr) return 0;
//        first(root->left, vec);
//        first(root->right, vec);
//        vec.push_back(root->val);
//        return 0;
//    }
//};
//
//int main()
//{
//
//}
