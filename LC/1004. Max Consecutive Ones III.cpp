//
// Created by WuFenghong on 2022/12/7.
//
#include "../util.h"

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0, ans = -1, n = nums.size(), count = 0;
        for(int high = 0; high < n; ++high) {
            if(nums[high] == 0) ++count;
            while(count > k) {
                if(nums[low] == 0) --count;
                ++low;
            }
            ans = ans < high-low+1 ? high-low+1 : ans;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector v{1,1,1,0,0,0,1,1,1,1,0};
    s.longestOnes(v,2);
}