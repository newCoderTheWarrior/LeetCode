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
//    vector<int> MySort(vector<int>& arr) {
//        // write code here
//        qsort(arr, 0, arr.size() - 1);
//        for (int num : arr) cout << num << " ";
//        return arr;
//    }
//
//    void qsort(vector<int>& nums, int left, int right) {
//        if (left == right) return;
//        int newRight = right;
//        int newLeft = left;
//        int flag = nums[left];
//        while (1) {
//            while (nums[right] >= flag) {
//                right--;
//                if (right == newLeft-1) {
//                    //if(nums[right]>=flag)
//                    goto L;
//                }
//            }
//            if (left == right) {
//                int temp = nums[left];
//                nums[left] = nums[newLeft];
//                nums[newLeft] = temp;
//                goto L;
//            }
//            left++;
//            while (nums[left] < flag) {
//                if (left == right) {
//                    int temp = nums[left];
//                    nums[left] = nums[newLeft];
//                    nums[newLeft] = temp;
//                    goto L;
//                }
//                left++;
//            }
//            int temp = nums[left];
//            nums[left] = nums[right];
//            nums[right] = temp;
//        }
//    L:;
//        if (right >= newLeft + 2)
//            qsort(nums, newLeft, right - 1);
//        if (left <= newRight - 2)
//            qsort(nums, left + 1, newRight);
//    }
//};
//
//int main()
//{
//    vector<int> a = { 5,1,6,2,5 };
//    Solution s;
//    s.MySort(a);
//}