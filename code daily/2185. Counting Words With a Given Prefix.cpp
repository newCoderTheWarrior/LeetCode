//
// Created by WuFenghong on 2023/1/8.
//
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(const auto& word : words) {
            if(word.find(pref) == 0) ++ans;
        }
        return ans;
    }
};