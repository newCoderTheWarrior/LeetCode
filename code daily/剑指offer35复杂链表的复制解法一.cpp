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
//            vector<int> randomPosition;//�½�һ�����飬���ڼ�������ڵ�randomָ���ָ��ڵ㣬������һ��
//                                       //����1 31�ʹ����һ���ڵ��randomָ��31�ڵ㣬25 67�ʹ���ڵ�25
//                                       //��randomָ��67�ڵ�
//            Node* NewHead = new Node(0);//�������ͷ���
//            Node* Index = head;//����˫ָ�뼼��������������ڱ�ָ��ԭ����ĵ�ǰ�ڵ�
//            Node* newIndex = NewHead;//���ָ��ָ��������ĵ�ǰ�ڵ�
//            NewHead->val = head->val;//��ͷ�����и���
//            NewHead->next = NULL;//��Ϊֻ��һ���ڵ㣬nextָ��NULL
//            NewHead->random = NULL;//random�ڵ�֮��ͳһ�޸ģ���Ϊ����������δ����
//            Index = Index->next;//ͷ��㸴����ϣ��������ڱ����λ��ָ����һ���ڵ�
//            Node* positionOfRandom = NULL;//��������������ȷ��randomָ����α�
//            if (head->random == NULL)//���������ͷ����randomָ��NULL
//            {
//                // NewHead -> random = NULL;//��������ͷ���randomҲָ��NULL
//                randomPosition.push_back(1);//1�����飬��ʾ���ǵ�һ���ڵ�
//                randomPosition.push_back(0);//0�����飬��ʾ�ýڵ��randomָ��ָ��null
//            }
//            else//���ͷ�ڵ�randomָ��Ϊ�գ�Ѱ��ͷ���randomָ��λ��
//            {
//                randomPosition.push_back(1);//1�����飬��ʾ���ǵ�һ���ڵ�
//                int flag = 1;//������¼randomָ��ڵ�λ��
//                positionOfRandom = head;//�α�ָ��ͷ�ڵ�
//                while (positionOfRandom != head->random)//�α�����ƶ�ֱ���ҵ�randomָ��λ��
//                {
//                    flag++;
//                    positionOfRandom = positionOfRandom->next;
//                }
//                randomPosition.push_back(flag);//��¼λ�õ�����������
//            }
//            int count = 1;//��¼�����ڼ����ڵ���
//            while (Index != NULL)//ÿ������һ���ڵ�������ڱ����λ��һ���ڵ㣬ֱ��ȫ���������
//            {
//                /***************���нڵ㸴�ƹ���************************************************/
//                count++;//����Ľڵ���+1
//                Node* temp = new Node(0);//�½�һ���ڵ�
//                temp->next = NULL;//�Ƚ�nextָ���
//                temp->random = NULL;//�Ƚ�randomָ���
//                temp->val = Index->val;//���ɽڵ��ֵ���ƹ���
//                newIndex->next = temp; //���½��ڵ�����������β��
//
///**************ȷ���ýڵ�randomָ��****************************************/
//                randomPosition.push_back(count);//count�����飬��ʾ���ǵ�count���ڵ�
//                if (Index->random == NULL)//���������ý���randomָ��NULL
//                {
//                    randomPosition.push_back(0);//����0��¼������ýڵ�randomҲָ��NULL
//                }
//                else//���������ýڵ�randomָ��Ϊ�գ�Ѱ�Ҹý��randomָ��λ��
//                {
//                    int flag = 1;//������¼randomָ��ڵ�λ��
//                    positionOfRandom = head;//�α�ָ��ͷ�ڵ�
//                   // Node* nonius = head -> random;
//                    while (positionOfRandom != Index->random)//�α�����ƶ�ֱ���ҵ�randomָ��λ��
//                    {
//                        flag++;
//                        positionOfRandom = positionOfRandom->next;
//                    }
//                    randomPosition.push_back(flag);//��¼λ�õ�����������
//                }
//
//                Index = Index->next;//������һ���ڵ�����α����λ��һ��λ��
//                newIndex = newIndex->next;
//            }
//
//            /***********����֮ǰ�����ĸ����������randomָ����*************************************/
//                        //�ò���ͬ������˫�ڱ�����
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