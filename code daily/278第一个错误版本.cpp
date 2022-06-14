//// The API isBadVersion is defined for you.
//// bool isBadVersion(int version);
//
//class Solution {
//public:
//	int firstBadVersion(int n) {
//		if (isBadVersion(1))
//		{
//			return 1;
//		}
//		int low = 1;
//		int high = n;
//		while (high != low)
//		{
//			if (low == (high - 1))
//			{
//				if (isBadVersion(low) && !isBadVersion(low - 1))
//				{
//					return low;
//				}
//				else
//				{
//					if (isBadVersion(high) && !isBadVersion(high - 1))
//					{
//						return high;
//					}
//					else
//					{
//						return high + 1;
//					}
//				}
//			}
//			else
//			{
//				int mid = (high - low) / 2;
//				mid = mid + low;
//				if (isBadVersion(mid))
//				{
//					if (!isBadVersion(mid - 1))
//					{
//						return mid;
//					}
//					else
//					{
//						high = mid - 1;
//					}
//				}
//				else
//				{
//					if (isBadVersion(mid + 1))
//					{
//						return mid + 1;
//					}
//					else
//					{
//						low = mid + 1;
//					}
//				}
//			}
//		}
//		return -1;
//	}
//};

