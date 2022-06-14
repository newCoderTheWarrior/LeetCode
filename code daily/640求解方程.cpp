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
//    string solveEquation(string equation) {
//        int n = equation.size();
//        int isLeft = 1;
//        string workStr;
//        for (int i = 0; i < n; i++) {
//            if (equation[i] != '=' && equation[i] != '+' && equation[i] != '-') {
//                workStr += equation[i];
//            }
//            else {
//                workOnStr(workStr, isLeft);
//                if (equation[i] == '=') {
//                    isLeft = -1;
//                }
//                else {
//                    workStr += equation[i];
//                }
//            }
//        }
//        cout << "最后的字符串为：" << workStr << endl;
//        workOnStr(workStr, isLeft);
//        cout << "a[0]=" << a[0] << " ";
//        cout << "a[1]=" << a[1] << endl;
//        if (a[0] == 0 && a[1] == 0) return "Infinite solutions";
//        if (a[0] == 0 && a[1] != 0) return "No solution";
//        return "x=" + to_string((-1)*float(a[1]) / float(a[0]));
//    }
//
//    void workOnStr(string& workStr, int isLeft) {
//        if (workStr[0] != '+' && workStr[0] != '-') workStr = "+" + workStr;
//        cout << "当前处理的字符串为：" << workStr << endl;
//        /*string::size_type idx;
//        idx = workStr.find("x");*/
//        int isNegative = 1;
//        int isX = 1;
//        if (workStr[workStr.size()-1] == 'x') isX = 0;
//        if (workStr[0] == '-') isNegative = -1;
//        int m = workStr.size();
//        int temp = 0;
//        if (isX == 1) {
//            cout << "x不存在" << endl;
//            for (int j = m - 1; j >= 1; --j) {
//                temp += int(workStr[j] - '0') * pow(10, m - 1 - j);
//            }
//            a[isX] += isNegative * isLeft * temp;
//        }
//        else {
//            cout << "x存在" << endl;
//            for (int j = m - 2; j >= 1; --j) {
//                temp += int(workStr[j] - '0') * pow(10, m - 2 - j);
//            }
//            if (temp == 0) temp = 1;
//            a[isX] += isNegative * isLeft * temp;
//        }
//        workStr.clear();
//    }
//
//    int a[2] = { 0,0 };
//};
//
//int main()
//{
//    Solution s;
//    s.solveEquation("x+5-3+x=6+x-2");
//}