//
// Created by WuFenghong on 2022/7/20.
//
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k == 0) return grid;
        int m = grid.size(), n = grid[0].size();
        k = k % (m*n);
        vector<int> aid;
        for(const auto& nums : grid){
            aid.insert(aid.end(), nums.begin(), nums.end());
        }
        int pos = m*n - k;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(pos >= m*n) pos = 0;
                grid[i][j] = aid[pos++];
            }
        }
        return grid;
    }
};