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
//    int search(vector<int>& nums, int target) {
//        int low = 0;
//        int high = nums.size() - 1;
//        int mid;
//        while (low < high) {
//            mid = (low + high) / 2;
//            if (nums[mid] == target) return mid;
//            if (low == high - 1) {
//                if (nums[low] == target) return low;
//                if (nums[high] == target) return high;
//                return -1;
//            }
//            else {
//                if (nums[mid] > target) high = mid;
//                else low = mid;
//            }
//        }
//        return -2;
//    }
//};
//
//int main()
//{
//    vector<int> nums = { -1,0,3,5,9,12 };
//    Solution s;
//    s.search(nums, 9);  
//}