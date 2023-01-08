//
// Created by WuFenghong on 2023/1/3.
//
#include "../util.h"

class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        string str;
        string pre;
        for(int i = 0; i < n; ++i) {
            if(s[i] >= '0' && s[i] <= '9') {
                str += s[i];
                if(i == n-1) {
                    if(str <= pre) return false;
                }
            }
            else {
                if(!str.empty()) {
                    if(str <= pre) return false;
                }
                pre = str;
                str.clear();
            }
        }
        return true;
    }
};

class Solution1 {
public:
    int minOperations(vector<int> nums, int x) {
        int n = nums.size();
        auto sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum < x) return -1;
        if(sum == x) return n;
        auto minNum = min_element(nums.begin(), nums.end());
        if (*minNum > x) return -1;
        function<int(int l, int r, int left, int count)> dfs = [&](int l, int r, int left, int count) {
            if (left == 0) {
                return count;
            }
            else {
                if (l > r || left < 0) return -1;
            }
            int count1 = dfs(l + 1, r, left - nums[l], count + 1);
            int count2 = dfs(l, r - 1, left - nums[r], count + 1);
            cout << count1 << " " << count2 << endl;
            if (count1 == -1 && count2 == -1) return -1;
            if (count1 != -1 && count2 != -1) return min(count1, count2);
            if (count2 != -1) return count2;
            return count1;
        };
        return dfs(0, n - 1, x, 0);
    }
};

int main(){
    cout << "main run" << endl;
    cout << Solution1().minOperations(vector<int>{6285,2511,3617,8040,6970,8187,5617,7665,5069,875,3570,378,6556,1147,8616,3140,561,2875,5087,1372,2617,756,9076,1381,5428,498,1386,6984,5624,7908,5724,9921,4368,7036,92,4584,2654,2942,9947,9832,9969,9965,9991,9999,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,9992,10000,9985,8145,8244,4960,7560,7757,3981,8841,3482,2188,3475,1594,5101,4404,9679,3500,6984,5108,7258,9696,702,9031,2502,2326,5099,4767,7164,9432,2084,5294,7382,7564,809},
    842910);
    Solution s;
    s.areNumbersAscending("12345");
}