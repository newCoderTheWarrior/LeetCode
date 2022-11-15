//
// Created by WuFenghong on 2022/11/15.
//
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[&](const auto& vec1, const auto& vec2){return vec1.back() > vec2.back();});
        int ans = 0;
        for(const auto& vec : boxTypes) {
            if(vec.front() <= truckSize) {
                ans += (vec.front())*(vec.back());
                truckSize -= vec.front();
            }
            else {
                ans += truckSize*(vec.back());
                return ans;
            }
        }
        return ans;
    }
};