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
//        if (head == NULL || head->next == NULL)//��ͷ���Ϊ�ջ�ֻ��ͷ���
//        {
//            if (head == NULL)//���ͷ���Ϊ��
//            {
//                return NULL;//��ֱ�ӷ���ͷ���
//            }
//            else//���ֻ��ͷ���
//            {
//                Node* NewHead = new Node(0);//�������ͷ���
//                NewHead->val = head->val;//��ͷ�����и���
//                NewHead->next = NULL;//��Ϊֻ��һ���ڵ㣬nextָ��NULL
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
//        else//�����ֻͷ���
//        {
//            /**********�������ڵ�ı��ݽڵ�***********************************/
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
//            /**********�����ݽڵ��randomָ��ָ����ȷλ��*******************/
//            index = head;
//            {
//                while (index != NULL)
//                {
//                    if (index->next->random == NULL) {}
//                    else
//                    {
//                        index->next->random = index->next->random->next;//��randomָ����ȷλ��
//                    }
//                    Node* temp = index->next->next;
//                    index = temp;
//                }
//            }
//
//            /**********������������������*******************************/
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
//                        index->next->next = index->next->next->next;//��������ڵ㴮��
//                    }
//                    index->next = temp;
//                    index = temp;
//                }
//            }
//            return NewHead;
//        }
//    }
//};