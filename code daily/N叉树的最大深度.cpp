//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//
//class Solution {
//public:
//    int maxDepth(Node* root) {
//        return maxDepth(root);
//    }
//
//    int work(Node* root) {
//        int depth = 0;
//        if (root == nullptr) return depth;
//        depth++;
//        int n = (root->children).size();
//        int maxDepth = 0;
//        for (int i = 0; i < n; i++) {
//            int temp = work(root->children[i]);
//            maxDepth = (temp > maxDepth) ? temp : maxDepth;
//        }
//        return depth + maxDepth;
//    }
//
//    int ans = 0;
//};
//
//
//int main()
//{
//    Node* root = new Node(1, 
//        { new Node(3,{ new Node(5),new Node(6) }),
//         new Node(2),
//         new Node(4)
//        });
//    Solution s;
//    s.work(root);
//}