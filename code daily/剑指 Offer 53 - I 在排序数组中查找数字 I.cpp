//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        if(nums.size() == 0)
//        {
//            return 0;
//        }
//        if(nums.size() == 1)
//        {
//            if(nums[0] == target)
//            {
//                return 1;
//            }
//            else
//            {
//            return 0;
//            }
//        }
//        int low = 0;
//        int high = nums.size() - 1;
//        int mid = 0; 
//        while(1)
//        {
//            if(low == (high - 1))
//            {
//                if((nums[low] == target) || (nums[high]) == target)
//                {
//                    mid = low;
//                    goto L;
//                }
//                else
//                {
//                    return 0;
//                }
//            }
//            mid = (low + high)/2;
//            if(nums[mid] == target)
//            {
//                goto L;
//            }
//            else
//            {
//                if(nums[mid] < target)
//                {
//                    low = mid;
//                }
//                else
//                {
//                    high = mid;
//                }
//            }
//        }
//        L:;
//        low = 0;
//        int lowGo = 1;
//        int highGo = 1;
//        for(int i = mid,j = (mid+1);;)
//        {
//            if((nums[i] != target))
//            {
//                lowGo = 0;
//            }
//            if(nums[j] != target)
//            {
//                highGo = 0;
//            }
//            if((lowGo == 0) && (highGo == 0))
//            {
//                goto K;
//            }
//            if(nums[i] == target)
//            {
//                low ++;
//                if(i == 0)
//                {
//                    nums[i] = target-1;
//                }
//                else{
//                    i--;
//                }
//            }
//            if(nums[j] == target)
//            {
//                low ++;
//                if(j == nums.size() - 1)
//                {
//                    nums[j] = target -1;
//                }
//                else{
//                j++;
//                }
//            }
//        }
//        K:;
//        return low;
//    }
//};