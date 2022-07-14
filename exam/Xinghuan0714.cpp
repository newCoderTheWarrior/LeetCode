//
// Created by WuFenghong on 2022/7/14.
//
#include<bits/stdc++.h>
using namespace std;

constexpr static int direction[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int BFS(vector<vector<int>>& maze, vector<vector<int>>& visited, int& distance, const int& n) {
    queue<pair<int, int>> aid;
    aid.push(make_pair(0, 0));
    int count = 0, size = 1;
    while (!aid.empty()) {
        auto [x, y] = aid.front();
        for (const auto &[xOfs, yOfs]: direction) {
            auto i = x + xOfs, j = y + yOfs;
            auto check = [](int i, int j, int n) {
                return i >= 0 && i < n && j >= 0 && j < n;
            };
            if (!check(i, j, n) || maze[i][j] == 0 || visited[i][j] == 1) {
                continue;
            }
            if (i == n - 1 && j == n - 1) {
                return distance + 1;
            }
            visited[i][j] = 1;
            aid.push(make_pair(i, j));
        }
        aid.pop();
        ++count;
        if (count == size) {
            ++distance;
            count = 0;
            size = int(aid.size());
        }
    }
    return 0;
}
void DFS(vector<vector<int>>& maze, vector<vector<int>>& visited, int distance, const int& minDis, int& paths, int x, int y, const int& n){
    if(x == n-1 && y == n-1 && distance == minDis) {
        ++paths;
        return;
    }
    for (const auto &[xOfs, yOfs]: direction) {
        auto i = x + xOfs, j = y + yOfs;
        auto check = [](int i, int j, int n) {
            return i >= 0 && i < n && j >= 0 && j < n;
        };
        if (!check(i, j, n) || maze[i][j] == 0 || visited[i][j] == 1) {
            continue;
        }
        visited[i][j] = 1;
        ++distance;
        DFS(maze,visited, distance, minDis, paths, i, j, n);
        --distance;
        visited[i][j] = 0;
    }
}
/*
8
1 1 1 1 1 0 1 0
0 0 0 1 0 1 0 0
1 1 1 1 1 0 0 0
1 0 1 0 0 1 1 0
1 1 1 0 1 1 1 0
1 0 0 1 1 1 0 0
1 1 1 1 1 1 1 1
0 0 1 1 1 0 1 1
*/
void handler() {
    int distance = 0;
    int paths = 0;
    int n;
    cin >> n;
    vector<vector<int>> maze(n,vector<int>(n,0));
    vector<vector<int>> visited(n,vector<int>(n,0));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> maze[i][j];
        }
    }
    int minDis = BFS(maze,visited,distance,n);
    visited = vector(n,vector(n,0));
    visited[0][0] = 1;
    DFS(maze,visited,0,minDis,paths,0,0,n);
    if(minDis == 0) {
        cout << 0 << endl;
        cout << 0 << endl;
    }
    else {
        cout << minDis << endl;
        cout << paths << endl;
    }
}


int main() {
    handler();
}