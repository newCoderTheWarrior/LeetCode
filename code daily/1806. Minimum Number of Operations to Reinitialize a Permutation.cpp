//
// Created by WuFenghong on 2023/1/9.
//
class Solution {
public:
    int reinitializePermutation(int n) {
        int step = 0;
        vector<int> perm(n,0);
        vector<int> arr(n,0);
        for(int i = 0; i < n; ++i) perm[i] = i;
        auto check = [&](){
            for(int i = 0; i < n; ++i) {
                if(perm[i] != i) return false;
            }
            return true;
        };
        do{
            for(int i = 0; i < n; ++i) {
                if(i % 2 == 0) {
                    arr[i] = perm[i/2];
                }
                else arr[i] = perm[n/2 + (i-1)/2];
            }
            perm = arr;
            ++step;
        }
        while(!check());
        return step;
    }
};