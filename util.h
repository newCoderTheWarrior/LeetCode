//
// Created by WuFenghong on 2022/6/18.
//

#ifndef LEETCODE_UTIL_H
#define LEETCODE_UTIL_H
#include <bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//Definition for singly - linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

template<typename T>
pair<T*,T*> buildListNode(string input) {
    input = input.substr(1);
    input.pop_back();
    string str;
    vector<int> nums;
    for(const auto& c : input) {
        if(c == ','){
            nums.emplace_back(stoi(str));
            str.clear();
        }
        else str += c;
    }
    nums.emplace_back(stoi(str));
    T* a = new T(nums[0]);
    T* temp = a;
    for (int i = 1; i < nums.size(); i++) {
        temp->next = new T(nums[i]);
        temp = temp->next;
    }
    return {a,temp};
}

#endif //LEETCODE_UTIL_H
