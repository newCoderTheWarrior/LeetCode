//
// Created by WuFenghong on 2023/1/9.
//
#include "../util.h"

class LRUCache {
private:
    struct ListNode{
        int key;
        int val;
        ListNode* pre;
        ListNode* next;
        ListNode(int key, int val) {
            this->key = key;
            this->val = val;
        }
    };

    void add(ListNode* temp) {
        if(!temp) return;
        temp->pre = head;
        temp->next = head->next;
        head->next = temp;
        temp->next->pre = temp;
        ++size;
        umap[temp->key] = temp;
    }

    ListNode* remove(int key) {
        if(!umap.count(key)) return nullptr;
        auto temp = umap[key];
        temp->pre->next = temp->next;
        temp->next->pre = temp->pre;
        --size;
        umap.erase(key);
        return temp;
    }

    void moveToHead(int key) {
        if(!umap.count(key)) return;
        auto temp = remove(key);
        if(temp) add(temp);
    }

    unordered_map<int, ListNode*> umap;
    ListNode* head;
    ListNode* tail;
    int size;
    int capacity;
public:
    LRUCache(int capacity) {
        head = new ListNode(0,0);
        tail = new ListNode(0,0);
        head->next = tail;
        head->pre = tail;
        tail->next = head;
        tail->pre = head;
        size = 0;
        this->capacity = capacity;
    }

    int get(int key) {
        if(!umap.count(key)) return -1;
        else {
            moveToHead(key);
            return umap[key]->val;
        }
    }

    void put(int key, int value) {
        if(umap.count(key)) {
            umap[key]->val = value;
            moveToHead(key);
        }
        else {
            if(size == capacity) remove(tail->pre->key);
            add(new ListNode(key,value));
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main(){
    LRUCache l(2);
    l.put(1,1);
    l.put(2,2);
    cout << l.get(1) << endl;
    l.put(3,3);
    cout << l.get(2) << endl;
    l.put(4,4);
    cout << l.get(1) << endl;
    cout << l.get(3) << endl;
    cout << l.get(4) << endl;
}