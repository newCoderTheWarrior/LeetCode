//
// Created by WuFenghong on 2022/6/14.
//
#include <bits/stdc++.h>
using namespace std;
class TwoSum {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int m = numbers.size(), low = 0, high = m-1, mid = (high-low)/2+low;
        while(numbers[low] + numbers[high] != target) {
            if(numbers[low] + numbers[high] > target) {
                --high;
            }else {
                ++low;
            }
        }
        return {low,high};
    }
};