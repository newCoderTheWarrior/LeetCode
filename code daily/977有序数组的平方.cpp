//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//using namespace std;
//
////class Solution {
////public:
////
////    int searchInsert(vector<int>& nums, int target) {
////        int n = nums.size();
////        int left = 0, right = n - 1, ans = n;
////        while (left <= right) {
////            int mid = ((right - left) >> 1) + left;
////            if (target <= nums[mid]) {
////                ans = mid;
////                right = mid - 1;
////            }
////            else {
////                left = mid + 1;
////            }
////        }
////        return ans;
////    }
////
////    int search(vector<int>& nums, int target) {
////        int low = 0, high = nums.size() - 1;
////        while (low <= high) {
////            int mid = (high - low) / 2 + low;
////            int num = nums[mid];
////            if (num == target) {
////                return mid;
////            }
////            else if (num > target) {
////                high = mid - 1;
////            }
////            else {
////                low = mid + 1;
////            }
////        }
////        return -1;
////    }
////
////    vector<int> sortedSquares(vector<int>& nums) {
////        int zero;
////        int isThereAZero;
////        if (search(nums, 0) == -1)
////        {
////            isThereAZero = 0;
////            zero = searchInsert(nums, 0);
////        }
////        else
////        {
////            isThereAZero = 1;
////            zero = search(nums, 0);
////        }
////    }
////};
//
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int>& nums) {
//        int m = nums.size();//5
//        int n = 0;
//        vector<int> ans;
//        for (int i = 0; i < m; i++)
//        {
//            if (nums[i] <= 0)
//            {
//                n++;
//            }
//            nums[i] *= nums[i];
//        }
//        int i, j;//n == 3
//        for (i = n - 1, j = n; (i >= 0)&&(j < m);)
//        {
//            if (nums[i] <= nums[j])
//            {
//                ans.push_back(nums[i]);
//                i--;
//            }
//            else
//            {
//                ans.push_back(nums[j]);
//                j++;
//            }
//        }
//        if (i == -1)
//        {
//            for (j; j < m; j++)
//            {
//                ans.push_back(nums[j]);
//            }
//        }
//        else
//        {
//            for (i; i >= 0; i--)
//            {
//                ans.push_back(nums[i]);
//            }
//        }
//        for (int i = 0; i < m; i++)
//        {
//            cout << ans[i] << " ";
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    nums.push_back(-4);
//    nums.push_back(-1);
//    nums.push_back(0);
//    nums.push_back(3);
//    nums.push_back(10);
//    Solution s;
//    s.sortedSquares(nums);
//}