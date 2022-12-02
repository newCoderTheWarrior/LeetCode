//
// Created by WuFenghong on 2022/12/2.
//
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n,0);
        vector<int> positions;
        positions.reserve(n);
        for(int i = 0; i < n; ++i) {
            if(boxes[i] == '1') positions.emplace_back(i);
        }
        for(int i = 0; i < n; ++i) {
            for(const auto& pos : positions) {
                if(pos == i) continue;
                else ans[i] += abs(i-pos);
            }
        }
        return ans;
    }
};