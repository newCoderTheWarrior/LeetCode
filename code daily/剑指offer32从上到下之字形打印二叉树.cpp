//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> ansReal;
//        vector<int> ans;
//        stack<TreeNode*> a;
//        stack<TreeNode*> b;
//        if (root != NULL)
//        {
//            a.push(root);
//        }
//        else
//        {
//            return ansReal;
//        }
//        int model = 0;
//        while ((a.size() != 0) || (b.size() != 0))
//        {
//            if (model == 0) {
//                while (a.size() != 0)
//                {
//                    ans.push_back(a.top()->val);
//                    cout << a.top()->val << " ";
//                    if (a.top()->left != NULL)
//                    {
//                        b.push(a.top()->left);
//                    }
//                    if (a.top()->right != NULL)
//                    {
//                        b.push(a.top()->right);
//                    }
//                    a.pop();
//                }
//                ansReal.push_back(ans);
//                ans.clear();
//                model = 1;
//            }
//            else
//            {
//                while (b.size() != 0)
//                {
//                    ans.push_back(b.top()->val);
//                    cout << b.top()->val << " ";
//                    if (b.top()->right != NULL)
//                    {
//                        a.push(b.top()->right);
//                    }
//                    if (b.top()->left != NULL)
//                    {
//                        a.push(b.top()->left);
//                    }
//                    b.pop();
//                }
//                ansReal.push_back(ans);
//                ans.clear();
//                model = 0;
//            }
//        }
//        if (ans.size() != 0)
//        {
//            ansReal.push_back(ans);
//        }
//        return ansReal;
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(0);
//    nums.push_back(3);
//    nums.push_back(12);
//    unordered_map<string, int> myMap;
//    string s;
//    string s1 = "abcd";
//    s += s1[0];
//    myMap.insert(pair<string, int>(s, 1));
//
//    TreeNode* node1 = new TreeNode(3);
//    TreeNode* node2 = new TreeNode(9);
//    TreeNode* node3 = new TreeNode(20);
//    TreeNode* node4 = new TreeNode(15);
//    TreeNode* node5 = new TreeNode(7);
//    node1->left = node2;
//    node1->right = node3;
//    node3->left = node4;
//    node3->right = node5;
//    Solution obj;
//    obj.levelOrder(node1);
//}
//
//
//
//
