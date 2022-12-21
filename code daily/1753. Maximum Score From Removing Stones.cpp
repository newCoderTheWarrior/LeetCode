//
// Created by WuFenghong on 2022/12/21.
//
#include "../util.h"

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans = 0;
        vector v{a,b,c};
        while(v[0] > 0) {
            sort(v.begin(),v.end());
            --v[0];
            --v[2];
            ++ans;
        }
        sort(v.begin(),v.end());
        ans += v[1];
        return ans;
    }
};

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int sum = a + b + c;
        int maxVal = max({a, b, c});
        if (sum - maxVal < maxVal) {
            return sum - maxVal;
        } else {
            return sum / 2;
        }
    }
};

auto main() -> int
{
    Solution s;
    s.maximumScore(2,4,6);
}