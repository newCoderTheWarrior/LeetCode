//
// Created by WuFenghong on 2022/7/24.
//
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start == destination) return 0;
        auto n = distance.size();
        auto sumL = 0, sumM = 0, sumR = 0;
        auto sReal = min(start,destination);
        auto dReal = max(start,destination);
        for(int i = sReal; i < dReal; ++i){
            sumM += distance[i];
        }
        for(int i = 0; i < sReal; ++i){
            sumL += distance[i];
        }
        for(int i = dReal; i < n; ++i){
            sumR += distance[i];
        }
        return min(sumM,sumL+sumR);
    }
};