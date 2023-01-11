//
// Created by WuFenghong on 2023/1/11.
//
#include "../util.h"

class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        unordered_map<int,int> count;
        for(const auto& digit : num) ++count[digit];
        for(int i = 0; i < n; ++i) if(count[i] != num[i]) return false;
        return true;
    }
};

int main(){
    Solution s;
    s.digitCount("1210");
}