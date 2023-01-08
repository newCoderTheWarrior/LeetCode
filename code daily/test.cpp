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
                    auto num1 = stoi(pre);
                    auto num2 = stoi(str);
                    if(num2 <= num1) return false;
                }
            }
            else {
                if(!str.empty()) {
                    auto num1 = stoi(pre);
                    auto num2 = stoi(str);
                    if(num2 <= num1) return false;
                    pre = str;
                    str.clear();
                }
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
        //if(sum == x) return n;
        auto minNum = min_element(nums.begin(), nums.end());
        if (*minNum > x) return -1;
        thread t([](){
            int i = 0;
            while (true) {
                this_thread::sleep_for(1s);
                ++i;
                cout << "time fly, " << i << " seconds passed!" << endl;
            }
        });
        function<int(int l, int r, int left, int count, char dire)> dfs = [&](int l, int r, int left, int count, char dire) {
            if (left == 0) {
                return count;
            }
            else {
                if (l > r || left < 0) return -1;
            }
            int count1 = dfs(l + 1, r, left - nums[l], count + 1,'L');
            int count2 = dfs(l, r - 1, left - nums[r], count + 1,'R');
            cout << count1 << " " << count2 << endl;
            if (count1 == -1 && count2 == -1) return -1;
            if (count1 != -1 && count2 != -1) return min(count1, count2);
            if (count2 != -1) return count2;
            return count1;
        };
        return dfs(0, n - 1, x, 0,'0');
    }
};

int main(){
    cout << "main run" << endl;
    time_t cur = time(NULL);
    cout << Solution1().minOperations(vector<int>{5207,5594,477,6938,8010,7606,2356,6349,3970,751,5997,6114,9903,3859,6900,7722,2378,1996,8902,228,4461,90,7321,7893,4879,9987,1146,8177,1073,7254,5088,402,4266,6443,3084,1403,5357,2565,3470,3639,9468,8932,3119,5839,8008,2712,2735,825,4236,3703,2711,530,9630,1521,2174,5027,4833,3483,445,8300,3194,8784,279,3097,1491,9864,4992,6164,2043,5364,9192,9649,9944,7230,7224,585,3722,5628,4833,8379,3967,5649,2554,5828,4331,3547,7847,5433,3394,4968,9983,3540,9224,6216,9665,8070,31,3555,4198,2626,9553,9724,4503,1951,9980,3975,6025,8928,2952,911,3674,6620,3745,6548,4985,5206,5777,1908,6029,2322,2626,2188,5639},
    565610) << endl;/*
            {6285,2511,3617,8040,6970,8187,5617,7665,5069,875,3570,378,6556,1147,8616,3140,561,2875,5087,1372,2617,756,9076,1381,5428,498,1386,6984,5624,7908,5724,9921,4368,7036,92,4584,2654,2942,9947,9832,9969,9965,9991,9999,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,10000,9992,10000,9985,8145,8244,4960,7560,7757,3981,8841,3482,2188,3475,1594,5101,4404,9679,3500,6984,5108,7258,9696,702,9031,2502,2326,5099,4767,7164,9432,2084,5294,7382,7564,809},
                                      842910);*/
    time_t cur1 = time(NULL);
    auto dis = cur1 - cur;
    cout << dis;
}