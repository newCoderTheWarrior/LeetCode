//
// Created by WuFenghong on 2023/5/13.
//
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> dict(2005,0);
        for(const auto& num : nums){
            dict[1000+num] = 1;
        }
        int max = INT_MIN;
        for(const auto& num : nums) {
            if(num > max && dict[1000-num]==1) max = num;
        }
        return max == INT_MIN ? -1 : max;
    }
};