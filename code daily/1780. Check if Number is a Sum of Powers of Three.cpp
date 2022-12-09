//
// Created by WuFenghong on 2022/12/9.
//
class Solution {
    static unordered_set<int> dict;
public:
    Solution(){
        if(!dict.empty()) return;
        vector<int> aid;
        long long num = 1;
        long long maxNum = pow(10,7);
        for(int i = 0; i < 29; ++i) {
            if(num <= maxNum)
                aid.emplace_back(num);
            num *= (long long)3;
        }
        num = 0;
        int n = aid.size();
        function<void(int)> DFS = [&](int pos){
            if(pos == n || num > maxNum) {
                if(num <= maxNum) dict.emplace(num);
                return;
            }
            num += aid[pos];
            DFS(pos+1);
            num -= aid[pos];
            DFS(pos+1);
        };
        DFS(0);
    }
    bool checkPowersOfThree(int n) {
        return dict.count(n);
    }
};
unordered_set<int> Solution::dict;