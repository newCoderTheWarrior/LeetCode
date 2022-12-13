//
// Created by WuFenghong on 2022/12/13.
//
#include "../util.h"


class Solution {
public:
    auto checkIfPTypeStr(const string& sentence) {
        int exist = 0;
        for (const auto& c : sentence) {
            exist |= 1 << (c - 'a');
        }
        return exist == (1 << 26) - 1;
    }
};