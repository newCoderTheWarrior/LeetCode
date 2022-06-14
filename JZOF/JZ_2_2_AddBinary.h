//
// Created by WuFenghong on 2022/6/13.
//

#ifndef LEETCODE_JZ_2_2_ADDBINARY_H
#define LEETCODE_JZ_2_2_ADDBINARY_H

#include <bits/stdc++.h>
using namespace std;
class AddBinary {
public:
    string addBinary(string a, string b) {
        int m = a.size(), n = b.size();
        if(m < n) {
            string temp(n-m+1,'0');
            a = temp + a;
            b = '0' + b;
        }
        else {
            string temp(m-n+1,'0');
            b = temp + b;
            a = '0' + a;
        }
        int len = m > n ? m : n;
        int carry = 0;
        for(int i = len; i >= 0; --i) {
            auto sum = (a[i]-'0') + (b[i]-'0') + carry;
            switch (sum) {
                case 1 :{
                    carry = 0;
                    a[i] = '1';
                    break;
                }
                case 2 :{
                    carry = 1;
                    a[i] = '0';
                    break;
                }
                case 3 :{
                    carry = 1;
                    a[i] = '1';
                    break;
                }
                default:
                    break;
            }
        }
        auto pos = 0;
        for(const auto& c : a) {
            if(c == '0') ++pos;
            else break;
        }
        auto ans = a.substr(pos);
        return ans.empty() ? "0" : ans;
    }
};

#endif //LEETCODE_JZ_2_2_ADDBINARY_H
