//
// Created by WuFenghong on 2022/6/21.
//
#include "../util.h"
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(const auto& c : address) {
            if(c == '.') ans += "[.]";
            else ans += c;
        }
        return ans;
    }
};