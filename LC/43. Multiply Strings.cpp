//
// Created by WuFenghong on 2023/1/8.
//
#include "../util.h"

class Solution {
public:
    string add(string& num1, string& num2) {
        if(num1 == "0") return num2;
        if(num2 == "0") return num1;
        int m = num1.size(), n = num2.size();
        int len = abs(m-n) + min(m,n) + 1;
        num1 = string(len-m,'0') + num1;
        num2 = string(len-n,'0') + num2;
        int carry = 0;
        for(int i = len-1; i >= 0; --i) {
            int sum = carry + (num1[i]-'0') + (num2[i]-'0');
            if(sum > 9) {
                num1[i] = '0' + (sum-10);
            }
            else {
                num1[i] = '0' + sum;
            }
            carry = sum > 9 ? 1 : 0;
        }
        while(num1.front() == '0') num1 = num1.substr(1);
        return num1;
    }

    string oneBitMul(string num, char c) {
        if(c == '1') return num;
        if(c == '0') return string(num.size(), '0');
        int carry = 0;
        num = '0' + num;
        int n = num.size();
        for(int i = n-1; i >= 0; --i) {
            int res = (num[i] - '0') * (c - '0') + carry;
            if(res > 9) {
                num[i] = '0' + (res%10);
            }
            else num[i] = '0' + res;
            carry = res / 10;
        }
        while(num.front() == '0') num = num.substr(1);
        return num;
    }

    string multiply(string num1, string num2) {
        if(num1 == "0") return num2;
        if(num2 == "0") return num1;
        string ans;
        int m = num1.size(), n = num2.size();
        int index = 0;
        for(int i = m-1; i >= 0; --i) {
            string temp = oneBitMul(num2,num1[i]);
            temp += string(index++,'0');
            ans = add(ans,temp);
        }
        return ans;
    }
};

int main(){
    Solution s;
    s.multiply("123","456");
}