//
// Created by WuFenghong on 2023/1/3.
//
#include "../util.h"

class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        string str;
        string pre;
        for(int i = 0; i < n; ++i) {
            if(s[i] >= '0' && s[i] <= '9') {
                str += s[i];
                if(i == n-1) {
                    if(str <= pre) return false;
                }
            }
            else {
                if(!str.empty()) {
                    if(str <= pre) return false;
                }
                pre = str;
                str.clear();
            }
        }
        return true;
    }
};

int main(){
    cout << "main run" << endl;
    Solution s;
    s.areNumbersAscending("12345");
}