//
// Created by WuFenghong on 2022/11/11.
//
class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> dict = {
                'a','e','i','o','u','A','E','I','O','U'
        };
        int n = s.size();
        string right = s.substr(n/2);
        string left = s.substr(0,n/2);
        int countL = 0;
        int countR = 0;
        for(const auto& c : left) if(dict.count(c)) ++countL;
        for(const auto& c : right) if(dict.count(c)) ++countR;
        return countL == countR;
    }
};