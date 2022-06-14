//#include<iostream>
//using namespace std;
//#include<vector>
//
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
//            vector<int> randomPosition;//新建一个数组，用于记忆各个节点random指针的指向节点，俩数字一组
//                                       //例如1 31就代表第一个节点的random指向31节点，25 67就代表节点25
//                                       //的random指向67节点
//            Node* NewHead = new Node(0);//新链表的头结点
//            Node* Index = head;//采用双指针技术，这个旧链表哨兵指向原链表的当前节点
//            Node* newIndex = NewHead;//这个指针指向新链表的当前节点
//            NewHead->val = head->val;//将头结点进行复制
//            NewHead->next = NULL;//因为只有一个节点，next指向NULL
//            NewHead->random = NULL;//random节点之后统一修改，因为现在新链表还未成型
//            Index = Index->next;//头结点复制完毕，旧链表哨兵向后位移指向下一个节点
//            Node* positionOfRandom = NULL;//用来遍历旧链表确定random指向的游标
//            if (head->random == NULL)//如果旧链表头结点的random指向NULL
//            {
//                // NewHead -> random = NULL;//则新链表头结点random也指向NULL
//                randomPosition.push_back(1);//1入数组，表示这是第一个节点
//                randomPosition.push_back(0);//0入数组，表示该节点的random指针指向null
//            }
//            else//如果头节点random指向不为空，寻找头结点random指向位置
//            {
//                randomPosition.push_back(1);//1入数组，表示这是第一个节点
//                int flag = 1;//用来记录random指向节点位置
//                positionOfRandom = head;//游标指向头节点
//                while (positionOfRandom != head->random)//游标持续移动直到找到random指向位置
//                {
//                    flag++;
//                    positionOfRandom = positionOfRandom->next;
//                }
//                randomPosition.push_back(flag);//记录位置的整数入数组
//            }
//            int count = 1;//记录做到第几个节点了
//            while (Index != NULL)//每复制完一个节点旧链表哨兵向后位移一个节点，直到全部复制完毕
//            {
//                /***************进行节点复制工作************************************************/
//                count++;//处理的节点数+1
//                Node* temp = new Node(0);//新建一个节点
//                temp->next = NULL;//先将next指向空
//                temp->random = NULL;//先将random指向空
//                temp->val = Index->val;//将旧节点的值复制过来
//                newIndex->next = temp; //将新建节点链到新链表尾部
//
///**************确定该节点random指向****************************************/
//                randomPosition.push_back(count);//count入数组，表示这是第count个节点
//                if (Index->random == NULL)//如果旧链表该结点的random指向NULL
//                {
//                    randomPosition.push_back(0);//则用0记录新链表该节点random也指向NULL
//                }
//                else//如果旧链表该节点random指向不为空，寻找该结点random指向位置
//                {
//                    int flag = 1;//用来记录random指向节点位置
//                    positionOfRandom = head;//游标指向头节点
//                   // Node* nonius = head -> random;
//                    while (positionOfRandom != Index->random)//游标持续移动直到找到random指向位置
//                    {
//                        flag++;
//                        positionOfRandom = positionOfRandom->next;
//                    }
//                    randomPosition.push_back(flag);//记录位置的整数入数组
//                }
//
//                Index = Index->next;//处理完一个节点后俩游标向后位移一个位置
//                newIndex = newIndex->next;
//            }
//
//            /***********根据之前建立的辅助数组完成random指向工作*************************************/
//                        //该步骤同样采用双哨兵技术
//            newIndex = NewHead;
//            for (int i = 0, j = 2; i < count; i++, j = j + 2)
//            {
//                if (randomPosition[j - 1] == 0)
//                {
//                    newIndex->random = NULL;
//                }
//                else
//                {
//                    positionOfRandom = NewHead;
//                    for (int k = 0; k < randomPosition[j - 1] - 1; k++)
//                    {
//                        positionOfRandom = positionOfRandom->next;
//                    }
//                    newIndex->random = positionOfRandom;
//                }
//                newIndex = newIndex->next;
//            }
//            return NewHead;
//        }
//    }
//};