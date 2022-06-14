//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//using namespace std;
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int n = nums.size();//n=5
//        for (int i = 0, j = 1; j < n;)
//        {
//           /* if (i == (j - 1))
//            {
//                if ((nums[i] == 0) && (nums[j] != 0))
//                {
//                    int temp = nums[i];
//                    nums[i] = nums[j];
//                    nums[j] = temp;
//                }
//                goto L;
//            }*/
//            if (nums[i] == 0)
//            {
//                if (nums[j] == 0)
//                {
//                    j++;
//                }
//                else
//                {
//                    int temp = nums[i];
//                    nums[i] = nums[j];
//                    nums[j] = temp;
//                    i++;
//                }
//            }
//            else
//            {
//                i++;
//                //j++;
//            }
//        }
//    L:;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            cout << nums[i] << " ";
//        }
//    }
//};
//
//int main()
//{
//    vector<int> nums;
//    nums.push_back(0);
//    nums.push_back(1);
//    nums.push_back(0);
//    nums.push_back(3);
//    nums.push_back(12);
//    Solution s;
//    s.moveZeroes(nums);
//}