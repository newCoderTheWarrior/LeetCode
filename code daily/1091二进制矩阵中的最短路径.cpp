//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//#include <windows.h>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//        if (grid[0][0] == 1) return -1;
//        m = grid.size();
//        n = grid[0].size();
//        if (grid[m - 1][n - 1] == 1) return -1;
//        display(grid, path, visited);
//        dfs(grid, 0, 0);
//        return minLen;
//    }
//
//    void dfs(vector<vector<int>>& grid, int i, int j) {
//        path.push_back({ i,j });
//        display(grid, path, visited);
//        if (grid[i][j] == 1) {
//            path.pop_back();
//            visited[{i, j}]++;
//            display(grid, path, visited);
//        }
//        else {
//            count++;
//            if (count > minLen && isThereAPath == true) return;
//            if (i == m - 1 && j == n - 1) {
//                if (minLen == -1) minLen = count;
//                minLen = min(count, minLen);
//                pathsLen.push_back(count);
//                display(grid, path, visited);
//                isThereAPath = true;
//            }
//            else {
//                visited[{i, j}]++;
//                display(grid, path, visited);
//                if ((i + 1 < m && j + 1 < n) && visited.find({ i + 1,j + 1 }) == visited.end()) dfs(grid, i + 1, j + 1);//右下
//                if ((j + 1 < n) && visited.find({ i,j + 1 }) == visited.end()) dfs(grid, i, j + 1);//右
//                if ((i + 1 < m) && visited.find({ i + 1,j }) == visited.end()) dfs(grid, i + 1, j);//下
//                if ((i + 1 < m && j - 1 >= 0) && visited.find({ i + 1,j - 1 }) == visited.end()) dfs(grid, i + 1, j - 1);//左下
//                if ((j - 1 >= 0) && visited.find({ i,j - 1 }) == visited.end()) dfs(grid, i, j - 1);//左
//                if ((i - 1 >= 0 && j + 1 < n) && visited.find({ i - 1,j + 1 }) == visited.end()) dfs(grid, i - 1, j + 1);//右上
//                if ((i - 1 >= 0) && visited.find({ i - 1,j }) == visited.end()) dfs(grid, i - 1, j);//上
//                if ((j - 1 >= 0 && i - 1 >= 0) && visited.find({ i - 1,j - 1 }) == visited.end()) dfs(grid, i - 1, j - 1);//左上
//            }
//            path.pop_back();
//            visited.erase({ i,j });
//            count--;
//        }
//    }
//
//    void display(vector<vector<int>> grid, vector<pair<int, int>> path, map<pair<int, int>, int> visited) {
//        vector<vector<int>> gridNew = grid;
//        for (map<pair<int, int>, int>::iterator it = visited.begin();
//            it != visited.end();
//            it++) {
//            gridNew[it->first.first][it->first.second] = 2;
//        }
//        for (pair<int, int> pos : path) gridNew[pos.first][pos.second] = 3;
//        system("cls");
//        cout << "地图实时状态：" << endl;
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                cout << gridNew[i][j] << "  ";
//            }
//            cout << endl;
//        }
//        sort(pathsLen.begin(), pathsLen.end());
//        cout << "现有通路长度：";
//        for (int len : pathsLen) {
//            cout << len << " ";
//        }
//        Sleep(10);
//    }
//
//    int m = 0;
//    int n = 0;
//    int count = 0;
//    int minLen = -1;
//    bool isThereAPath = false;
//    map<pair<int, int>, int> visited;
//    vector<pair<int, int>> path;
//    vector<int> pathsLen;
//};
//
//int main()
//{
//    vector<vector<int>> a = { {0,1,0,0,0,0 }, { 0,1,0,1,1,0 }, { 0,1,1,0,1,0 }, { 0,0,0,0,1,0 }, { 1,1,1,1,1,0 }, { 1, 1, 1, 1, 1, 0 }};
//    vector<vector<int>> b = { {0, 0, 1, 1, 0, 0},{0, 0, 0, 0, 1, 1},{1, 0, 1, 1, 0, 0},{0, 0, 1, 1, 0, 0},{0, 0, 0, 0, 0, 0},{0, 0, 1, 0, 0, 0} };
//    vector<vector<int>> c = { {0,0,0},{1,1,0},{1,1,0} };
//    Solution s;
//    s.shortestPathBinaryMatrix(c);
//}