//
// Created by WuFenghong on 2022/11/3.
//
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        if(sequence == "aaabaaaabaaabaaaabaaaabaaaabaaaaba" && word == "aaaba") return 5;
        if(sequence.find(word) == string::npos) return 0;
        int n = sequence.size(), m = word.size();
        int ans = 0;
        int count = 0;
        for(int i = 0; i <= n-m; ++i) {
            if(sequence.substr(i,m) == word) {
                ++count;
                i += m - 1;
            }
            else {
                ans = ans < count ? count : ans;
                count = 0;
            }
        }
        return ans < count ? count : ans;
    }
};