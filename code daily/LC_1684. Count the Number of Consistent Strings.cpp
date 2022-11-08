//
// Created by WuFenghong on 2022/11/8.
//
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        unordered_set<char> dict(allowed.begin(), allowed.end());
        for(const auto& str : words) {
            bool isConsistent = true;
            for(const auto& c : str) {
                if(!dict.count(c)) {
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent) ++ans;
        }
        return ans;
    }
};