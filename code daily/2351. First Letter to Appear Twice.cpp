//
// Created by WuFenghong on 2023/1/1.
//
#include "../util.h"

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> dict(26,0);
        for(const auto& c : s) {
            ++dict[c-'a'];
            if(dict[c-'a'] == 2) return c;
        }
        //return 'a';
    }
};

int main(){
    Solution s;
    cout << s.repeatedCharacter("aabcd");
}