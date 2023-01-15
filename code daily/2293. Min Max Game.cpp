//
// Created by WuFenghong on 2023/1/15.
//
#include"../util.h"

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size() > 1) {
            int n = nums.size(), op = 0;
            for(int i = 0; i < n; i += 2) {
                if(op == 0) {
                    nums[i] = min(nums[i],nums[i+1]);
                    nums[i+1] = 0;
                    op = 1;
                }
                else {
                    nums[i] = max(nums[i],nums[i+1]);
                    nums[i+1] = 0;
                    op = 0;
                }
            }
            int l = 1, r = 2;
            while(r < n) {
                nums[l] = nums[r];
                nums[r] = 0;
                l += 1;
                r += 2;
            }
            nums.resize(n/2);
        }
        return nums.front();
    }
};

int main(){
    Solution s;
    vector<int> v{999,939,892,175,114,464,850,107};
    s.minMaxGame(v);
}