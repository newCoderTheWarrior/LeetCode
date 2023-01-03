//
// Created by WuFenghong on 2023/1/1.
//
#include "../util.h"

class Solution {
public:
    int a;
    string str;
    char c;
    //Solution(): a(10) {}
    char repeatedCharacter(string s) {
        vector<int> dict(26,0);
        for(const auto& c : s) {
            ++dict[c-'a'];
            if(dict[c-'a'] == 2) return c;
        }
        //return 'a';
    }

    auto func(){
        return move(a);
    }

    auto test(){
        auto num = func();
        cout << num << endl;
        cout << a << endl;
    }
};

int main(){
    double nums[1000];
    for(int i = 0; i < 1000; ++i) {
        nums[i] = i;
    }
    auto numsFrom = move(nums);
    for(int i = 0; i < 10; ++i) {
        cout << numsFrom[i] << " " << nums[i] << endl;
    }
    /*string s1 = "hello";
    auto s2 = move(s1);
    Solution s;
    s.str = "world";
    s.a = 100;
    s.c = 'a';
    auto s3 = move(s.str);
    cout << s3 << endl << s.str << endl;
    auto num = move(s.a);
    cout << num << endl << s.a << endl;
    auto ch = move(s.c);
    cout << ch << endl << s.c << endl;
    cout << s2 << endl << s1 << endl;*/
}