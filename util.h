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

auto buildTree(std::string&& input) -> TreeNode*
{
	input.pop_back();
	input.erase(input.begin());
	int len = input.size();
	int pos = 0;
	int nodePos = 0;
	std::vector<TreeNode*> nodes(2*len + 1, nullptr);
	std::string temp;
	while (1) {
		temp.clear();
		while (pos < len) {
			if (input[pos] != ',') {
				temp += input[pos++];
			}
			else {
				++pos;
				break;
			}
		}
		if (!temp.empty()) {
			if (temp == "null") {
				++nodePos;
				continue;
			}
			else {
				int val = std::stoi(temp);
				nodes[nodePos + 1] = new TreeNode(val);
				++nodePos;
			}
		}
		else break;
	}
	for (int i = 1; i < len + 1; ++i) {
		if (nodes[i]) {
			nodes[i]->left = nodes[i * 2];
			nodes[i]->right = nodes[i * 2 + 1];
		}
	}
	return nodes[1];
}

#endif //LEETCODE_UTIL_H
