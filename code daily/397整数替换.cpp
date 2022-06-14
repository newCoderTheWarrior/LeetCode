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
//    int integerReplacement(int n) {
//        if (n == 1) {
//            return 0;
//        }
//        else {
//            if (n % 2 == 0) {
//                return integerReplacement(n / 2) + 1;
//            }
//            else {
//                int a = integerReplacement(n - 1) + 1;
//                int b = 2147483647;
//                if (n != 2147483647) b = integerReplacement(n + 1) + 1;
//                else {
//                    b = integerReplacement(((n - 1) / 2) + 1) + 2;
//                }
//                return (a < b) ? a : b;
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.integerReplacement(5);
//}
