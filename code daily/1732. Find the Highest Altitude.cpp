//
// Created by WuFenghong on 2022/11/19.
//
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int n = gain.size();
        int height = 0;
        for(int i = 0; i < n; ++i) {
            height += gain[i];
            ans = ans < height ? height : ans;
        }
        return ans;
    }
};