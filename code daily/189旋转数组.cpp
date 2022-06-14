////class Solution {
////public:
////    void rotate(vector<int>& nums, int k) {
////        vector<int> newNums;
////        int index = nums.size();
////        while (index < k)
////        {
////            k = k - index;
////        }
////        for (int i = 0; i < k; i++)
////        {
////            newNums.push_back(nums[(nums.size() - k) + i]);
////        }
////        for (int j = 0; j < ((nums.size() - k)); j++)
////        {
////            newNums.push_back(nums[j]);
////        }
////        nums.clear();
////        for (int i = 0; i < index; i++)
////        {
////            nums.push_back(newNums[i]);
////        }
////    }
////};
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	a.insert();
//
//}
