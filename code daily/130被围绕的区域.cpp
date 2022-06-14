//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    void solve(vector<vector<char>>& board) {
//        m = board.size();
//        n = board[0].size();
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (board[i][j] == 'O' && visited.find({ i,j }) == visited.end()) {
//                    isToModify = 1;
//                    dfs(board, i, j);
//
//                    if (isToModify == 1) {
//                        for (map<pair<int, int>, int>::iterator it = toBeModify.begin();
//                            it != toBeModify.end();
//                            it++) {
//                            board[(it->first).first][(it->first).second] = 'X';
//                        }
//                    }
//                    toBeModify.clear();
//
//                }
//                else {
//                    visited[{i, j}]++;
//                }
//            }
//        }
//    }
//
//    void dfs(vector<vector<char>>& board, int i, int j) {
//        visited[{i, j}]++;
//        if (board[i][j] == 'X') return;
//        else {
//            toBeModify[{i, j}]++;
//            if (i == 0 || j == 0 || i == m - 1 || n == n - 1) isToModify = 0;
//            if (i - 1 >= 0 && visited.find({ i - 1,j }) == visited.end()) dfs(board, i - 1, j);
//            if (i + 1 < m && visited.find({ i + 1,j }) == visited.end()) dfs(board, i + 1, j);
//            if (j - 1 >= 0 && visited.find({ i,j - 1 }) == visited.end()) dfs(board, i, j - 1);
//            if (j + 1 < n && visited.find({ i,j + 1 }) == visited.end()) dfs(board, i, j + 1);
//        }
//        return;
//    }
//
//    int m = 0;
//    int n = 0;
//    int isToModify = 0;
//    map<pair<int, int>, int> visited;
//    map<pair<int, int>, int> toBeModify;
//};
//
//int main()
//{
//    vector<vector<char>> a = { {'X', 'O', 'X'}, { 'O', 'X', 'O' }, { 'X', 'O', 'X' } };
//    Solution s;
//    s.solve(a);
//}
//
