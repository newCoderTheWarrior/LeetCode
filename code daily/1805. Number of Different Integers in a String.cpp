//
// Created by WuFenghong on 2022/12/6.
//
class Solution {
public:
    int numDifferentIntegers(string word) {
        int n = word.size();
        unordered_set<string> nums;
        string num;
        for(int i = 0; i < n; ++i) {
            if(word[i] >= '0' && word[i] <= '9') {
                num += word[i];
            }
            else {
                if(!num.empty()) {
                    while(num.front() == '0' && num.size() > 1) num = num.substr(1);
                    nums.emplace(num);
                    num.clear();
                }
            }
        }
        if(!num.empty()) {
            while(num.front() == '0' && num.size() > 1) num = num.substr(1);
            nums.emplace(num);
            num.clear();
        }
        return nums.size();
    }
};