//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int findComplement(int num) {
//        vector<int> arr;
//        while (num != 0)
//        {
//            arr.push_back(num % 2);
//            num = num / 2;
//        }
//        for (int i = 0; i < arr.size(); i++)
//        {
//            if (arr[i] == 0)
//            {
//                arr[i] = 1;
//            }
//            else
//            {
//                arr[i] = 0;
//            }
//        }
//        int result = 0;
//        for (int i = arr.size() - 1, j = 0; i >= 0; i--, j++)
//        {
//            result += (arr[i]) * pow(2, i);
//        }
//        return result;
//    }
//};
//
