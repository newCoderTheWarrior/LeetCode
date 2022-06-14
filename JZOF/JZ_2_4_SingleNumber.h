//
// Created by WuFenghong on 2022/6/14.
//

#ifndef LEETCODE_JZ_2_4_SINGLENUMBER_H
#define LEETCODE_JZ_2_4_SINGLENUMBER_H
#include <bits/stdc++.h>
using  namespace std;
class SingleNumber {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(const auto& num : nums) {
            ++umap[num];
        }
        for(const auto& [key,val] : umap) {
            if(val == 1) return key;
        }
        return -1;
    }
};

#endif //LEETCODE_JZ_2_4_SINGLENUMBER_H
