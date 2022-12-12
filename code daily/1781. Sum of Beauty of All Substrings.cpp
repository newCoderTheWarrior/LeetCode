//
// Created by WuFenghong on 2022/12/12.
//
class Solution {
public:
    int beautySum(string s) {
        int ans = 0, n = s.size();
        for(int i = 0; i < n; ++i) {
            vector<int> dict(26,0);
            for(int j = i; j < n; ++j) {
                dict[s[j]-'a']++;
                int minNum = INT_MAX, maxNum = INT_MIN;
                for(const auto& val : dict) {
                    if(val == 0) continue;
                    minNum = minNum > val ? val : minNum;
                    maxNum = maxNum < val ? val : maxNum;
                }
                ans += maxNum - minNum;
            }
        }
        return ans;
    }
};