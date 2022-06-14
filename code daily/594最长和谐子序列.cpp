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
//    int findLHS(vector<int>& nums) {
//        map<int, int> mapOfOrderedNums;
//        for (int num : nums) {
//            mapOfOrderedNums[num]++;
//        }
//        ans = 0;
//        for (map<int, int>::iterator it = mapOfOrderedNums.begin();
//            it != mapOfOrderedNums.end();
//            it++)
//        {
//            if (++it != mapOfOrderedNums.end()) {
//                b = it->second;
//                c = it->first;
//                a = (--it)->second;
//                d = it->first;
//                if(c-d==1)
//                ans = ((a + b) > ans) ? (a + b) : ans;
//            }
//            if (it == mapOfOrderedNums.end()) break;
//        }
//        return ans;
//    }
//    static int ans;
//    static int a;
//    static int b;
//    static int c;
//    static int d;
//};
//int Solution::ans = 0;
//int Solution::a = 0;
//int Solution::b = 0;
//int Solution::c = 0;
//int Solution::d = 0;
//
//int main()
//{
//    vector<int> nums = { 1,3,2,2,5,2,3,7 };
//    Solution s;
//    cout<<s.findLHS(nums);
//}