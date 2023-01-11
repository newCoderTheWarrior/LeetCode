//
// Created by WuFenghong on 2023/1/9.
//
#include "../util.h"

class Solution {
public:

    Solution(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int maximalSquare(vector<vector<string>>& matrix) {
        int m = matrix.size();
        if(m == 0) return 0;
        int n = matrix.front().size();
        if(n == 0) return 0;
        int ans = 0;
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(matrix[i][j] == "1") ans = max(ans,1);
                else continue;
                int len = min(m-i,n-j);
                for(int k = 1; k < len; ++k) {
                    if(matrix[i+k][j+k] != "1") break;
                    else {
                        bool isValid = true;
                        for(int x = i+k; x >= i; --x) {
                            if(matrix[x][j+k] != "1") {
                                isValid = false;
                                break;
                            }
                        }
                        if(!isValid) break;
                        for(int y = j; y <= j+k; ++y) {
                            if(matrix[i+k][y] != "1") {
                                isValid = false;
                                break;
                            }
                        }
                        if(!isValid) break;
                        ans = max(ans,(k+1)*(k+1));
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<string>> v{
        {"1","0","1","0","0"},{"1","0","1","1","1"},{"1","1","1","1","1"},{"1","0","0","1","0"}
    };
    s.maximalSquare(v);
}