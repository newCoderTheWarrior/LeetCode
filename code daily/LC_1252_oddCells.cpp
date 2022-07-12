class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector v(m,vector(n,0));
        for(const auto& pos : indices) {
            int x = pos[0], y = pos[1];
            for(int j = 0; j < n; ++j){
                v[x][j] += 1;
            }
            for(int i = 0; i < m; ++i){
                v[i][y] += 1;
            }
        }
        int ans = 0;
        for(const auto& nums : v){
            for(const auto& num : nums) {
                if(num % 2 == 1) ++ans;
            }
        }
        return ans;
    }
};