//#include<iostream>
//using namespace std;
//
//
//
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    Node* next;
//    Node* random;
//
//    Node(int _val) {
//        val = _val;
//        next = NULL;
//        random = NULL;
//    }
//};
//
//class Solution {
//public:
//    Node* copyRandomList(Node* head) {
//        if (head == NULL || head->next == NULL)//若头结点为空或只有头结点
//        {
//            if (head == NULL)//如果头结点为空
//            {
//                return NULL;//则直接返回头结点
//            }
//            else//如果只有头结点
//            {
//                Node* NewHead = new Node(0);//新链表的头结点
//                NewHead->val = head->val;//将头结点进行复制
//                NewHead->next = NULL;//因为只有一个节点，next指向NULL
//                if (head->random == head)
//                {
//                    NewHead->random = NewHead;
//                }
//                else
//                {
//                    NewHead->random = NULL;
//                }
//                return NewHead;
//            }
//        }
//        else//如果不只头结点
//        {
//            /**********创建各节点的备份节点***********************************/
//            Node* index = head;
//            {
//                while (index != NULL)
//                {
//                    Node* temp = new Node(0);
//                    temp->val = index->val;
//                    temp->next = index->next;
//                    if (index->random == NULL)
//                    {
//                        temp->random = NULL;
//                    }
//                    else
//                    {
//                        temp->random = index->random;
//                    }
//                    index->next = temp;
//                    index = temp->next;
//                }
//            }
//
//            /**********将备份节点的random指针指向正确位置*******************/
//            index = head;
//            {
//                while (index != NULL)
//                {
//                    if (index->next->random == NULL) {}
//                    else
//                    {
//                        index->next->random = index->next->random->next;//将random指向正确位置
//                    }
//                    Node* temp = index->next->next;
//                    index = temp;
//                }
//            }
//
//            /**********将新链表与旧链表断链*******************************/
//            Node* NewHead = head->next;
//            Node* _temp = head->next->next->next;
//            index = head;
//            {
//                while (index != NULL)
//                {
//                    Node* temp = index->next->next;
//                    if (index->next->next == NULL) {}
//                    else
//                    {
//                        index->next->next = index->next->next->next;//将新链表节点串连
//                    }
//                    index->next = temp;
//                    index = temp;
//                }
//            }
//            return NewHead;
//        }
//    }
//};