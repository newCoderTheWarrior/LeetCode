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
//    int trapRainWater(vector<vector<int>>& heightMap) {
//        int ans = 0;
//        int m = heightMap.size();
//        int n = heightMap[0].size();
//        if (m < 3 || n < 3) return ans;
//        vector<vector<int>> MaxLeft(m, vector<int>(n));//该元素该行左边最大高度
//        vector<vector<int>> MaxRight(m, vector<int>(n));//该元素该行右边最大高度
//        vector<vector<int>> MaxUp(m, vector<int>(n));//该元素该列上边最大高度
//        vector<vector<int>> MaxDown(m, vector<int>(n));//该元素该列下边最大高度
//        for (int i = 0; i < m; i++) {
//            MaxLeft[i][0] = 0;
//            MaxRight[i][n - 1] = 0;
//        }
//        for (int j = 0; j < n; j++) {
//            MaxUp[0][j] = 0;
//            MaxDown[m - 1][j] = 0;
//        }
//        for (int i = 0; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                MaxLeft[i][j] = max(heightMap[i][j - 1], MaxLeft[i][j - 1]);
//            }
//        }
//        cout << "左没出错 ";
//        for (int i = 0; i < m; i++) {
//            for (int j = n - 2; j >= 0; j--) {
//                MaxRight[i][j] = max(heightMap[i][j + 1], MaxRight[i][j + 1]);
//            }
//        }
//        cout << "右没出错 ";
//        for (int i = 1; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                MaxUp[i][j] = max(MaxUp[i - 1][j], heightMap[i - 1][j]);
//            }
//        }
//        cout << "上没出错 ";
//        for (int i = n - 2; i >= 0; i--) {
//            for (int j = 0; j < n; j++) {
//                MaxDown[i][j] = max(heightMap[i + 1][j], MaxDown[i + 1][j]);
//            }
//        }
//        cout << "下没出错 ";
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                int add = min(min(MaxLeft[i][j], MaxRight[i][j]), min(MaxDown[i][j], MaxUp[i][j])) - heightMap[i][j];
//                ans += (add > 0) ? add : 0;
//            }
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> input = {
//        {1,4,3,1,3,2} ,{3,2,1,3,2,4},{2,3,3,2,3,1}
//    };
//    Solution s;
//    s.trapRainWater(input);
//}