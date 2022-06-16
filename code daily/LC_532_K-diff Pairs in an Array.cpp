//
// Created by WuFenghong on 2022/6/16.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k == 0) {
            unordered_map<int,int> umap;
            int ans = 0;
            for(const auto& num : nums) ++umap[num];
            for(const auto& [key,val] : umap) {
                if(val > 1) ++ans;
            }
            return ans;
        }
        int m = nums.size();
        unordered_set<int> uset;
        set<pair<int,int>> ans;
        for(const auto& num : nums) uset.emplace(num);
        for(const auto& num : nums) {
            if(uset.count(num + k)) {
                auto pL = make_pair(num,num + k);
                auto pR = make_pair(num + k, num);
                if(!ans.count(pL) && !ans.count(pR)) {
                    ans.emplace(pL);
                }
            }
            if(uset.count(num - k)) {
                auto pL = make_pair(num,num - k);
                auto pR = make_pair(num - k, num);
                if(!ans.count(pL) && !ans.count(pR)) {
                    ans.emplace(pR);
                }
            }
        }
        return ans.size();
    }
};