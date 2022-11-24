//
// Created by WuFenghong on 2022/11/23.
//
class Solution {
public:
    int calculate(int num) {
        int res = 0;
        while(num > 0) {
            res += num%10;
            num /= 10;
        }
        return res;
    }

    int countBalls(int lowLimit, int highLimit) {
        int maximum = INT_MIN;
        unordered_map<int,int> dict;
        for(int i = lowLimit; i <= highLimit; ++i) {
            int num = calculate(i);
            dict[num]++;
            maximum = max(maximum,dict[num]);
        }
        return maximun;
    }
};