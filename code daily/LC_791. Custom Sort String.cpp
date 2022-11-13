//
// Created by WuFenghong on 2022/11/13.
//
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> uorder;
        int n = order.size();
        for(int i = 0; i < n; ++i) uorder[order[i]] = i;
        sort(s.begin(),s.end(),[&](const char& a, const char& b){return uorder[a]<uorder[b];});
        return s;
    }
};