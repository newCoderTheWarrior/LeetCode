//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//class LRUCache {
//public:
//    struct DoubleLikedNode {
//        int key, value;
//        DoubleLikedNode* pre;
//        DoubleLikedNode* next;
//        DoubleLikedNode(int key, int value) {
//            this->key = key;
//            this->value = value;
//            this->pre = nullptr;
//            this->next = nullptr;
//        }
//    };
//
//    LRUCache(int capacity) {
//        this->capacity = capacity;
//        count = 0;
//        LRUhead = new DoubleLikedNode(-1, -1);
//        LRUtail = new DoubleLikedNode(-1, -1);
//        LRUhead->next = LRUtail;
//        LRUtail->pre = LRUhead;
//        LRUhead->pre = nullptr;
//        LRUtail->next = nullptr;
//        inLRU.clear();
//    }
//
//    int get(int key) {
//        int ans;
//        if (inLRU.find(key) != inLRU.end()) {
//            ans = inLRU[key]->value;
//            if (inLRU[key]->pre != LRUhead) {
//                //先让自身节点的前后链接在一起，使自己脱钩
//                inLRU[key]->pre->next = inLRU[key]->next;
//                inLRU[key]->next->pre = inLRU[key]->pre;
//
//                //再把自己放到正确的位置
//                inLRU[key]->next = LRUhead->next;
//                inLRU[key]->pre = LRUhead;
//                LRUhead->next = inLRU[key];
//                inLRU[key]->next->pre = inLRU[key];
//            }
//        }
//        else ans = -1;
//        return ans;
//    }
//
//    void put(int key, int value) {
//        if (inLRU.find(key) != inLRU.end()) {
//            inLRU[key]->value = value;
//            inLRU[key]->pre->next = inLRU[key]->next;
//            inLRU[key]->next->pre = inLRU[key]->pre;
//            inLRU[key]->next = LRUhead->next;
//            inLRU[key]->pre = LRUhead;
//            LRUhead->next = inLRU[key];
//            inLRU[key]->next->pre = inLRU[key];
//        }
//        else {
//            DoubleLikedNode* temp = new DoubleLikedNode(key, value);
//            inLRU[key] = temp;
//            inLRU[key]->next = LRUhead->next;
//            inLRU[key]->pre = LRUhead;
//            LRUhead->next = inLRU[key];
//            inLRU[key]->next->pre = inLRU[key];
//            count++;
//            if (count > capacity) {
//                LRUtail->pre = LRUtail->pre->pre;
//                inLRU.erase(LRUtail->pre->next->key);
//                LRUtail->pre->next = LRUtail;
//            }
//        }
//    }
//
//    int count;
//    int capacity;
//    DoubleLikedNode* LRUhead;
//    DoubleLikedNode* LRUtail;
//    unordered_map<int, DoubleLikedNode*> inLRU;
//};
//
//class Solution {
//private:
//    struct DoubleLikedNode {
//        int key, value;
//        DoubleLikedNode* pre;
//        DoubleLikedNode* next;
//        DoubleLikedNode(int key, int value) {
//            this->key = key;
//            this->value = value;
//            this->pre = nullptr;
//            this->next = nullptr;
//        }
//    };
//
//    int count;
//    int capacity;
//    DoubleLikedNode* LRUhead;
//    DoubleLikedNode* LRUtail;
//    unordered_map<int, DoubleLikedNode*> inLRU;
//
//    Solution(int capacity) {
//        this->capacity = capacity;
//        count = 0;
//        LRUhead = new DoubleLikedNode(-1, -1);
//        LRUtail = new DoubleLikedNode(-1, -1);
//        LRUhead->next = LRUtail;
//        LRUtail->pre = LRUhead;
//        LRUhead->pre = nullptr;
//        LRUtail->next = nullptr;
//        inLRU.clear();
//    }
//
//public:
//    vector<int> LRU(vector<vector<int> >& operators, int k) {
//        vector<int> ans;
//        for (vector<int> op : operators) {
//            if (op[0] == 1) {
//                int key = op[1];
//                int value = op[2];
//                if (inLRU.find(key) != inLRU.end()) {
//                    inLRU[key]->value = value;
//                    inLRU[key]->pre->next = inLRU[key]->next;
//                    inLRU[key]->next->pre = inLRU[key]->pre;
//                    inLRU[key]->next = LRUhead->next;
//                    inLRU[key]->pre = LRUhead;
//                    LRUhead->next = inLRU[key];
//                    inLRU[key]->next->pre = inLRU[key];
//                }
//                else {
//                    DoubleLikedNode* temp = new DoubleLikedNode(key, value);
//                    inLRU[key] = temp;
//                    inLRU[key]->next = LRUhead->next;
//                    inLRU[key]->pre = LRUhead;
//                    LRUhead->next = inLRU[key];
//                    inLRU[key]->next->pre = inLRU[key];
//                    count++;
//                    if (count > capacity) {
//                        LRUtail->pre = LRUtail->pre->pre;
//                        inLRU.erase(LRUtail->pre->next->key);
//                        LRUtail->pre->next = LRUtail;
//                    }
//                }
//            }
//            else {
//                int temp;
//                int key = op[1];
//                if (inLRU.find(key) != inLRU.end()) {
//                    temp = inLRU[key]->value;
//                    if (inLRU[key]->pre != LRUhead) {
//                        //先让自身节点的前后链接在一起，使自己脱钩
//                        inLRU[key]->pre->next = inLRU[key]->next;
//                        inLRU[key]->next->pre = inLRU[key]->pre;
//
//                        //再把自己放到正确的位置
//                        inLRU[key]->next = LRUhead->next;
//                        inLRU[key]->pre = LRUhead;
//                        LRUhead->next = inLRU[key];
//                        inLRU[key]->next->pre = inLRU[key];
//                    }
//                }
//                else temp = -1;
//                ans.push_back(temp);
//            }
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    LRUCache l(2);
//    l.put(1, 1);
//    l.put(2, 2);
//    l.get(1);
//    l.put(3, 3);
//    l.get(2);
//    l.put(4, 4);
//    l.get(1);
//    l.get(3);
//    l.get(4);
//    /*
//    l.put(5, 5);
//    l.get(1);
//    l.get(2);
//    l.get(3);
//    l.get(4);
//    l.get(5);*/
//
//}
