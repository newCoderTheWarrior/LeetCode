//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//#include<functional>
//#include<queue>
//using namespace std;
//
//class Solution {
//    constexpr static int direction[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//public:
//    int maxDistance(vector<vector<int>>&& grid) {
//        int m = grid.size(), n = grid[0].size();
//        int ans = -1;
//        queue<pair<int, int>> q;
//        vector<vector<int>> visited(m, vector<int>(n, 0));
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                if (grid[i][j] == 1) {
//                    q.emplace(make_pair(i, j));
//                    ++visited[i][j];
//                }
//            }
//        }
//        while (!q.empty()) {
//            auto& [x, y] = q.front();
//            for (const auto& [xOfs, yOfs] : direction) {
//                int i = x + xOfs, j = y + yOfs;
//                if (i >= 0 && j >= 0 && i < m && j < n && visited[i][j] == 0) {
//                    ++visited[i][j];
//                    grid[i][j] = grid[x][y] + 1;
//                    q.emplace(make_pair(i, j));
//                    ans = ans < grid[i][j] ? grid[i][j] : ans;
//                }
//            }
//            q.pop();
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    s.maxDistance({ {1,0,1},{0,0,0},{1,0,1} });
//}