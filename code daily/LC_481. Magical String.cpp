//
// Created by WuFenghong on 2022/10/31.
//
string s = "122";
vector<int> ans(100000,0);
auto f = []()->int{
    auto add = '1';
    auto pos = 2;
    while(pos < 100000) {
        if(s[pos] == '2') {
            s += add;
            s += add;
        }
        else s += add;
        add = add == '1' ? '2' : '1';
        ++pos;
    }
    auto count = 0;
    for(auto i = 0; i < 100000; ++i) {
        if(s[i] == '1') ++count;
        ans[i] = count;
    }
    return 0;
}();

class Solution {
public:
    auto magicalString(int n) {
        return ans[n-1];
    }
};