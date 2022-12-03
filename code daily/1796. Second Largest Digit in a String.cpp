//
// Created by WuFenghong on 2022/12/3.
//
class Solution {
public:
    int secondHighest(string s) {
        int maxNum = -1, secondMaxNum = -1, num = -1;
        for(const auto& c : s) {
            if(c >= '0' && c <= '9') {
                num = c - '0';
                if(num > maxNum) {
                    secondMaxNum = maxNum;
                    maxNum = num;
                }
                else {
                    if(num < maxNum && num > secondMaxNum) secondMaxNum = num;
                }
            }
        }
        return secondMaxNum;
    }
};