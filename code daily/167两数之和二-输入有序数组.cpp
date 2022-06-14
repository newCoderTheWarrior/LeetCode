//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int hash[2001][2];
//        vector<int> ans;
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            hash[numbers[i] + 1000][0] = -1;
//            hash[numbers[i] + 1000][1] = i + 1;
//        }
//        for (int i = 0; i < numbers.size(); i++)
//        {
//            if (hash[target - numbers[i] + 1000][0] == -1);
//            {
//                ans.push_back(i + 1);
//                ans.push_back(hash[target - numbers[i] + 1000][1]);
//                goto L;
//            }
//        }
//    L:;
//        for (int i = 0; i < ans.size(); i++)
//        {
//            cout << ans[i] << " ";
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    string s;
//    s.replace(0,2,"");
//    vector<int> nums;
//    nums.push_back(5);
//    nums.push_back(25);
//    nums.push_back(75);/*
//    nums.push_back(3);
//    nums.push_back(12);*/
//    Solution s;
//    s.twoSum(nums,100);
//
//}