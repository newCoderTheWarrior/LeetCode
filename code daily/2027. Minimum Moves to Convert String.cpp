//
// Created by WuFenghong on 2022/12/27.
//
class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n;) {
            if(s[i] == 'O') {
                ++i;
                continue;
            }
            else {
                ++ans;
                i += 3;
            }
        }
        return ans;
    }
};