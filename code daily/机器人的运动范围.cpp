//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<Windows.h>
//using namespace std;
//
//class Solution {
//public:
//    int movingCount(int m, int n, int k) {
//        vector<vector<int>> grid(m, vector<int>(n));
//        for (int i = 0; i < m; i++)
//        {
//            int count = 0;
//            int tempI = i;
//            while (tempI != 0)
//            {
//                count += tempI % 10;
//                tempI /= 10;
//            }
//            for (int j = 0; j < n; j++)
//            {
//                int countJ = 0;
//                int tempJ = j;
//                while (tempJ != 0)
//                {
//                    countJ += tempJ % 10;
//                    tempJ /= 10;
//                }
//                grid[i][j] = (count+countJ > k) ? 1 : 0;
//            }
//        }
//        showGrid(grid, 0, 0);
//        grid[0][0] = 2;//标记格子，防止重复扫描
//        area = 1;//初始化面积
//        getArea(grid, 0, 0, area, m, n);//则计算岛屿面积
//        return area;
//    }
//
//
//    int area, m, n;
//
//    void getArea(vector<vector<int>>& grid, int sr, int sc, int& area, int srLimit, int scLimit)
//    {//计算坐标sr，sc所在的岛屿的面积
//        if ((sr < 0) || (sr == srLimit) || (sc < 0) || (sc == scLimit))
//        {
//            return;
//        }
//        showGrid(grid, sr, sc);
//        showGrid(grid, sr, sc-1);
//        if ((isInGrid(sr, sc - 1, srLimit, scLimit)) && (grid[sr][sc - 1] == 0))
//            //以下几个if依次为遍历与该坐标相连的左右上下区域
//        {
//            grid[sr][sc - 1] = 2;
//            area++;//坐标值为1则面积++
//            getArea(grid, sr, sc - 1, area, srLimit, scLimit);
//        }
//        showGrid(grid, sr, sc+1);
//        if ((isInGrid(sr, sc + 1, srLimit, scLimit)) && (grid[sr][sc + 1] == 0))
//        {
//            grid[sr][sc + 1] = 2;
//            area++;
//            getArea(grid, sr, sc + 1, area, srLimit, scLimit);
//        }
//        showGrid(grid, sr-1, sc);
//        if ((isInGrid(sr - 1, sc, srLimit, scLimit)) && (grid[sr - 1][sc] == 0))
//        {
//            grid[sr - 1][sc] = 2;
//            area++;
//            getArea(grid, sr - 1, sc, area, srLimit, scLimit);
//        }
//        showGrid(grid, sr+1, sc);
//        if ((isInGrid(sr + 1, sc, srLimit, scLimit)) && (grid[sr + 1][sc] == 0))
//        {
//            grid[sr + 1][sc] = 2;
//            area++;
//            getArea(grid, sr + 1, sc, area, srLimit, scLimit);
//        }
//    }
//
//
//    bool isInGrid(int i, int j, int m, int n)//判断坐标是否在输入的grid中
//    {
//        return ((i >= 0) && (i < m) && (j >= 0) && (j < n)) ? true : false;
//    }
//
//    void showGrid(vector<vector<int>>& grid, int posI, int posJ)
//    {
//        Sleep(100);
//        system("cls");
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                cout << "--";
//            }
//            cout <<"-"<< endl;
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if(i==posI&&j==posJ) 
//                    cout << "|" <<"a";
//                else
//                cout << "|"<<grid[i][j];
//            }
//            cout <<"|"<< endl;
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                cout << "--";
//            }
//            cout <<"-"<< endl;
//        }
//        Sleep(200);
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout<<s.movingCount(4, 6, 5);
//}




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */









