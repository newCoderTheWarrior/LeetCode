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
//    int maxPoints(vector<vector<int>>& points) {
//        int ans = 0;
//        int m = points.size();
//        if (m == 1 || m == 2) return m;
//        for (int i = 0; i < m; ++i) {
//            for (int j = i + 1; j < m; ++j) {
//                if ((points[i][0] - points[j][0]) != 0 && (points[i][1] - points[j][1]) != 0) {
//                    double k = double(double(points[i][1]) - double(points[j][1])) / double(double(points[i][0]) - double(points[j][0]));
//                    //cout<<"斜率："<<k;
//                    int count = 0;
//                    cout << "当前连线点：(" << points[i][0] << "," << points[i][1] << ")"
//                                     << "(" << points[j][0] << "," << points[j][1] << ")" << endl;
//                    for (int z = 0; z < m; z++) {
//                        if (z != i && z != j) {
//                            double gapY = double(double(points[z][1]) - double(points[i][1]));
//                            double gapX = double(double(points[z][0]) - double(points[i][0]));
//                            double KgapX = k * gapX;
//                            cout << "纵轴差：" << gapY << " ";
//                            cout << "横轴差：" << gapX << " ";
//                            cout << "K倍横轴差：" << KgapX << " ";
//                            if (KgapX == gapY) ++count;
//                            cout << "当前连线点数：" << count + 2 << " ";
//                            cout << endl;
//                        }
//                    }
//                    ans = ans < count ? count : ans;
//                }
//                else {
//                    if ((points[i][1] - points[j][1]) == 0) {
//                        int count = 0;
//                        for (int z = 0; z < m; z++) {
//                            if (z != i && z != j && points[z][1] == points[i][1]) ++count;
//                        }
//                        ans = ans < count ? count : ans;
//                    }
//                    else {
//                        int count = 0;
//                        for (int z = 0; z < m; z++) {
//                            if (z != i && z != j && points[z][0] == points[i][0]) ++count;
//                        }
//                        ans = ans < count ? count : ans;
//                    }
//                }
//            }
//        }
//        return ans + 2;
//    }
//
//    void display(vector<vector<int>> points) {
//        int m = points.size();
//        int minX = points[0][0];
//        int maxX = points[0][0];
//        int minY = points[0][1];
//        int maxY = points[0][1];
//        for (vector<int> point : points) {
//            minX = min(minX, point[0]);
//            minY = min(minY, point[1]);
//            maxX = max(maxY, point[1]);
//            maxY = max(maxY, point[1]);
//        }
//        int lenX = maxX - minX;
//        int lenY = maxY - minY;
//        vector<vector<char>> map(++lenX, vector<char>(++lenY,' '));
//        for (vector<int> point : points) {
//            map[point[0] - minX][point[1] - minY] = '*';
//        }
//        for (vector<char> map1 : map) {
//            for (char c : map1) {
//                cout << c;
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main()
//{
//    vector<vector<int>> input = { {54,153},{1,3},{0,-72},{-3,3},{12,-22},{-60,-322},{0,-5},{-5,1},{5,5},{36,78},{3,-4},{5,0},{0,4},{-30,-197},{-5,0},{60,178},{0,0},{30,53},{24,28},{4,5},{2,-2},{-18,-147},{-24,-172},{-36,-222},{-42,-247},{2,3},{-12,-122},{-54,-297},{6,-47},{-5,3},{-48,-272},{-4,-2},{3,-2},{0,2},{48,128},{4,3},{2,4} };
//    vector<vector<int>> input1 = { {1,1} ,{3,2},{5,3},{4,1},{2,3},{1,4} };
//    Solution s;
//    //s.display(input);
//    s.maxPoints(input);
//}
//{-4, -47}, { 0, -23 }, { -7, -65 }, { 7, 138 }, { 0, 27 }, { -5, -90 }, { -106, -146 }, { -420, -158 }, { -7, -128 }, { 0, 16 }, { -6, 9 }, { -34, 26 }, { -9, -166 }, { -570, -69 }, { -665, -85 }, { 560, 248 }, { 1, -17 }, { 630, 277 }, { 1, -7 }, { -287, -222 }, { 30, 250 }, { 5, 5 }, { -475, -53 }, { 950, 187 }, { 7, -6 }, { -700, -274 }, { 3, 62 }, { -318, -390 }, { 7, 19 }, { -285, -21 }, { -5, 4 }, { 53, 37 }, { -5, -1 }, { -2, -33 }, { -95, 11 }, { 4, 1 }, { 8, 25 }, { 700, 306 }, { 1, 24 }, { -2, -6 }, { -35, -387 }, { -630, -245 }, {-328, -260], [-350, -129], [35, 299], [-380, -37], [-9, -9], [210, 103], [7, -5], [-3, -52], [-51, 23], [-8, -147], [-371, -451], [-1, -14], [-41, 6], [-246, -184], [350, 161], [-212, -268], [-140, -42], [-9, -4], [-7, 5], [10, 6], [-15, -191], [-7, -4], [318, 342], [-8, -71], [-68, 20], [6, 119], [6, 13], [-280, -100], [140, 74], [-760, -101], [0, -24], [-70, -13], [0, 2], [0, -9], [106, 98]]
