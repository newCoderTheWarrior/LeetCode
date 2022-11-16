//
// Created by WuFenghong on 2022/11/16.
//
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        int minNum = nums.back();
        for(int i = n-3; i >= 0; --i) {
            if(nums[i] > minNum) return false;
            minNum = min(minNum,nums[i+1]);
        }
        return true;
    }
};