//
// Created by WuFenghong on 2022/11/25.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int ans = 0, m = s.size();
        for(const auto& word : words) {
            int n = word.size();
            int i = 0, j = 0;
            bool isStretchy = true;
            for(; i < m && j < n;) {
                if(s[i] != word[j]) {
                    isStretchy = false;
                    break;
                }
                int countI = 1, countJ = 1;
                while(i+1<m && s[i]==s[i+1]) {
                    ++countI;
                    ++i;
                }
                while(j+1<n && word[j]==word[j+1]) {
                    ++countJ;
                    ++j;
                }
                ++i,++j;
                if(countJ > countI) {
                    isStretchy = false;
                    break;
                }
                if((countI < 3 && countI == countJ) || countI >= 3) continue;
                else {
                    isStretchy = false;
                    break;
                }
            }
            if(i==m && j==n && isStretchy) ++ans;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<string> words = {"hello", "hi", "helo"};
    s.expressiveWords("heeellooo",words);
}