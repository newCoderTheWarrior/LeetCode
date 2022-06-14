//class Solution {
//public:
//	int search(vector<int>& nums, int target) {
//		int low = 0;
//		int high = nums.size() - 1;
//		return searchTarget(nums, target, low, high);
//	}
//
//	int searchTarget(vector<int>& nums, int target, int low, int high) {
//		if (((high - low) == 0) || ((high - low) == 1))
//		{
//			if (nums[low] == target)
//			{
//				return low;
//			}
//			else
//			{
//				if (nums[high] == target)
//				{
//					return high;
//				}
//				else
//				{
//					return -1;
//				}
//			}
//		}
//		else
//		{
//			int flag = (high + low) / 2;
//			if (nums[flag] == target)
//			{
//				return flag;
//			}
//			else {
//				if (nums[flag] > target)
//				{
//					return searchTarget(nums, target, low, flag);
//				}
//				else
//				{
//					return searchTarget(nums, target, flag, high);
//				}
//			}
//		}
//	}
//};