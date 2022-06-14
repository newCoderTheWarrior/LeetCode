//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//class Node {
//public:
//    int val;
//    Node* left;
//    Node* right;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//        left = NULL;
//        right = NULL;
//    }
//
//    Node(int _val, Node* _left, Node* _right) {
//        val = _val;
//        left = _left;
//        right = _right;
//    }
//};
//
//
//class Solution {
//public:
//    Node* treeToDoublyList(Node* root) {
//        Traversal(root, head);
//        head->left = tail;
//        tail->right = head;
//        return head;
//    }
//
//    void Traversal(Node* root, Node* head) {
//        if (root == NULL) return;
//        Node* tempLeft = root->left;
//        Node* tempRight = root->right;
//        if (head == NULL) {
//            head = root;
//            tail = head;
//            count++;
//        }
//        else {
//            Node* temp = head;
//            if (root->val <= temp->val)
//            {
//                head->left = root;
//                root->right = head;
//                count++;
//            }
//            else {
//                int pos = 0;
//                for (int i = 0; i < count - 1; i++)
//                {
//                    if (root->val > temp->val)
//                    {
//                        if (pos == count - 1) {
//                            goto K;
//                        }
//                        temp = temp->right;
//                        pos++;
//                    }
//                    else {
//                        break;
//                    }
//                }
//                temp->left->right = root;
//                root->left = temp->left;
//                root->right = temp;
//                temp->left = root;
//                count++;
//                goto L;
//            K:;
//                temp->right = root;
//                root->left = temp;
//                tail = root;
//                count++;
//            L:;
//            }
//        }
//        Traversal(tempLeft, head);
//        Traversal(tempRight, head);
//    }
//
//    Node* head = NULL;
//    Node* tail = NULL;
//    int count = 0;
//    unordered_map<Node*, int> Umap;
//};
//
//int main()
//{
//    Node* root = new Node(4,
//        new Node(2,
//            new Node(1),
//            new Node(3)),
//        new Node(5)
//    );
//
//}
//
