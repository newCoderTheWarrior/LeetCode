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
//        grid[0][0] = 2;//��Ǹ��ӣ���ֹ�ظ�ɨ��
//        area = 1;//��ʼ�����
//        getArea(grid, 0, 0, area, m, n);//����㵺�����
//        return area;
//    }
//
//
//    int area, m, n;
//
//    void getArea(vector<vector<int>>& grid, int sr, int sc, int& area, int srLimit, int scLimit)
//    {//��������sr��sc���ڵĵ�������
//        if ((sr < 0) || (sr == srLimit) || (sc < 0) || (sc == scLimit))
//        {
//            return;
//        }
//        showGrid(grid, sr, sc);
//        showGrid(grid, sr, sc-1);
//        if ((isInGrid(sr, sc - 1, srLimit, scLimit)) && (grid[sr][sc - 1] == 0))
//            //���¼���if����Ϊ�����������������������������
//        {
//            grid[sr][sc - 1] = 2;
//            area++;//����ֵΪ1�����++
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
//    bool isInGrid(int i, int j, int m, int n)//�ж������Ƿ��������grid��
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









