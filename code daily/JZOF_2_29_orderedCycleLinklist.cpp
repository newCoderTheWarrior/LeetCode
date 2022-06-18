//
// Created by WuFenghong on 2022/6/18.
//
#include "../util.h"

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = nullptr;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        if(!head) {
            Node* ans = new Node(insertVal);
            ans->next = ans;
            return ans;
        }
        vector<Node*> aid{head};
        auto temp = head->next;
        while(temp != head) {
            aid.emplace_back(temp);
            temp = temp->next;
        }
        sort(aid.begin(),aid.end(),[](const auto& node1, const auto& node2){return node1->val <= node2->val;});
        Node* minPre = aid.back();
        Node* newHead = aid.front();
        if(minPre->val == newHead->val) {
            auto ans = new Node(insertVal);
            ans->next = head->next;
            head->next = ans;
        }
        else {
            minPre->next = nullptr;
            if(insertVal <= newHead->val) {
                auto ans = new Node(insertVal);
                ans->next = newHead;
                minPre->next = ans;
                return head;
            }
            if(insertVal >= minPre->val) {
                auto ans = new Node(insertVal);
                minPre->next = ans;
                ans->next = newHead;
                return head;
            }
            temp = newHead;
            while(temp) {
                if(temp->next->val > insertVal) {
                    auto ans = new Node(insertVal);
                    ans->next = temp->next;
                    temp -> next = ans;
                    minPre->next = newHead;
                    return head;
                }
                else
                    temp = temp->next;
            }
        }
        return head;
    }
};

int main(){
    string input = "[3,3,3]";
    auto head = buildListNode<Node>(input);
    head.second->next = head.first;
    Solution s;
    s.insert(head.first,0);
}