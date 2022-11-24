//
// Created by WuFenghong on 2022/11/24.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; ++i) {
            int maxNum = nums[i];
            for(int j = i; j < n; ++j) {
                maxNum = max(maxNum,nums[j]);
                if(maxNum >= left && maxNum <= right) ++ans;
                else break;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector nums = {73,55,36,5,55,14,9,7,72,52};
    s.numSubarrayBoundedMax(nums,32,69);
}