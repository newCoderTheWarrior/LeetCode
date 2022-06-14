//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    int findCircleNum(vector<vector<int>>& isConnected) {
//        m = isConnected.size();
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < m; j++)
//            {
//                cout << isConnected[i][j];
//            }
//            cout << endl;
//        }
//        cout << endl;
//
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j <= i; j++) {
//                if (isConnected[i][j] == 1) {
//                    ans++;
//                    dfs(isConnected, i, j);
//                }
//            }
//        }
//        return ans;
//    }
//
//    void dfs(vector<vector<int>>& isConnected, int i, int j) {
//        if (isConnected[i][j] == 1) {
//            isConnected[i][j] = 0;
//            for (int k = 0; k < m; k++) {
//                dfs(isConnected, i, k);
//            }
//            for (int k = 0; k < m; k++) {
//                dfs(isConnected, j, k);
//            }
//        }
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < m; j++)
//            {
//                cout << isConnected[i][j];
//            }
//            cout << endl;
//        }
//        cout << endl;
//
//    }
//
//    int ans = 0;
//    int m;
//};
//
//int main()
//{
//    vector<vector<int>> a = { {1, 1, 0},{1, 1, 0},{0, 0, 1} };
//    Solution s;
//    s.findCircleNum(a);
//}
