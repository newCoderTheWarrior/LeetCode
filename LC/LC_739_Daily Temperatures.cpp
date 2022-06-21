//
// Created by WuFenghong on 2022/6/21.
//
#include "../util.h"
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int m = temperatures.size();
        stack<int> s;
        vector<int> ans(m,0);
        for(int i = 0; i < m; ++i) {
            if(s.empty() || temperatures[i] <= temperatures[s.top()]) {
                s.emplace(i);
            }
            else {
                while(!s.empty() && temperatures[i] > temperatures[s.top()]) {
                    ans[s.top()] = i - s.top();
                    s.pop();
                }
                s.emplace(i);
            }
        }
        return ans;
    }
};