//
// Created by WuFenghong on 2023/2/17.
//
class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        if(m == 0) return ans;
        int n = grid.front().size();
        if(n == 0) return ans;
        auto calculate = [&](int i, int j) {
            int lenI = 0, lenJ = 0;
            int pos = j;
            while(pos < n && grid[i][pos++] == 1) ++lenI;
            pos = i;
            while(pos < m && grid[pos++][j] == 1) ++lenJ;
            int len = lenI < lenJ ? lenI : lenJ;
            while(len > 1) {
                bool isValid = true;
                for(int ofs = 1; ofs < len; ++ofs) {
                    if(grid[i+ofs][j+len-1] != 1) {
                        isValid = false;
                        break;
                    }
                }
                for(int ofs = 1; ofs < len; ++ofs) {
                    if(grid[i+len-1][j+ofs] != 1) {
                        isValid = false;
                        break;
                    }
                }
                if(isValid) break;
                else --len;
            }
            return len*len;
        };
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(grid[i][j] == 1) ans = max(ans,calculate(i,j));
            }
        }
        return ans;
    }
};

//最长递增子序列
