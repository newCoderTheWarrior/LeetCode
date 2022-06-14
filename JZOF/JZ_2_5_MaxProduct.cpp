//
// Created by WuFenghong on 2022/6/14.
//
#include <bits/stdc++.h>
using namespace std;

class MaxProduct {
public:
    int maxProduct(vector<string>& words) {
        int m = words.size();
        vector<shared_ptr<unordered_set<char>>> dict(m,nullptr);
        int ans = 0;
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < m; ++j) {
                if(i == j) continue;
                if(dict[i] == nullptr) {
                    auto charSet = make_shared<unordered_set<char>>();
                    for(const auto& c : words[i]) {
                        charSet->emplace(c);
                    }
                    dict[i] = charSet;
                }
                if(dict[j] == nullptr) {
                    auto charSet = make_shared<unordered_set<char>>();
                    for(const auto& c : words[j]) {
                        charSet->emplace(c);
                    }
                    dict[j] = charSet;
                }
                auto check = [&](int i, int j) {
                    for(const auto& c : *dict[i]) {
                        if(dict[j]->count(c)) return false;
                    }
                    return true;
                };
                if(check(i,j)) {
                    int mul = words[i].size() * words[j].size();
                    ans = ans < mul ? mul : ans;
                }
            }
        }
        return ans;
    }
};