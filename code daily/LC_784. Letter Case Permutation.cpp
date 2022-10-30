//
// Created by WuFenghong on 2022/10/30.
//
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        int n = s.size();
        ans.reserve((n+1)*(n+1));
        function<void(int)> DFS = [&](int pos) {
            if(pos == n) {
                ans.emplace_back(s);
                return;
            }
            if(s[pos] >= '0' && s[pos] <= '9') DFS(pos+1);
            else {
                auto c = s[pos];
                if(c >= 'A' && c <= 'Z') s[pos] = char('a' + c - 'A');
                DFS(pos+1);
                s[pos] = char('A' + s[pos] - 'a');
                DFS(pos+1);
                s[pos] = c;
            }
        };
        DFS(0);
        return ans;
    }
};