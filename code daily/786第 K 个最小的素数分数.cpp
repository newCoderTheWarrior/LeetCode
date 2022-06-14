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
//    struct aid {
//        int i;
//        int j;
//        double v;
//    };
//
//    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
//        vector<aid> nums;
//        int n = arr.size();
//        int isLeft = n * (n - 1) / 4;
//        if (k <= isLeft) {
//            for (int i = 0; i < n; i++) {
//                double there = double(arr[i]) / double(arr[n - 1]);
//                if (nums.size() >= k && there >= nums[k - 1].v) break;
//                for (int j = n - 1; j >= 0; j--) {
//                    int m = nums.size();
//                    aid temp;
//                    temp.i = arr[i];
//                    temp.j = arr[j];
//                    temp.v = double(arr[i]) / double(arr[j]);
//                    if (m >= k && temp.v >= nums[k - 1].v) break;
//                    if (m == 0) nums.push_back(temp);
//                    else {
//                        if (temp.v >= nums[m - 1].v) nums.push_back(temp);
//                        else {
//                            if (temp.v <= nums[0].v) nums.insert(nums.begin(), temp);
//                            else {
//                                int pos = 0;
//                                while (temp.v > nums[pos].v) pos++;
//                                nums.insert(nums.begin() + pos, temp);
//                            }
//                        }
//                    }
//                    cout << "(" << temp.i << "/" << temp.j << ") ";
//                }
//            }
//            cout << " 分界线 ";
//            for (int k = 0; k < nums.size(); k++) {
//                cout << "(" << nums[k].i << "/" << nums[k].j << ") ";
//            }
//            vector<int> ans = { nums[k - 1].i, nums[k - 1].j };
//            return ans;
//        }
//        else {
//            for (int i = n - 2; i >= 0; i--) {
//                double there = double(arr[i]) / double(arr[n - 1]);
//                if (nums.size() >= (n * (n - 1) / 2) - k + 1 && there <= nums[nums.size()-1].v) break;
//                for (int j = i + 1; j < n; j++) {
//                    int m = nums.size();
//                    aid temp;
//                    temp.i = arr[i];
//                    temp.j = arr[j];
//                    temp.v = double(arr[i]) / double(arr[j]);
//                    if (m >= (n * (n - 1) / 2) - k + 1 && temp.v <= nums[nums.size()-1].v) break;
//                    if (m == 0) nums.push_back(temp);
//                    else {
//                        if (temp.v <= nums[m - 1].v) nums.push_back(temp);
//                        else {
//                            if (temp.v >= nums[0].v) nums.insert(nums.begin(), temp);
//                            else {
//                                int pos = 0;
//                                while (temp.v < nums[pos].v) pos++;
//                                nums.insert(nums.begin() + pos, temp);
//                            }
//                        }
//                    }
//                    cout << "(" << temp.i << "/" << temp.j << ") ";
//                }
//            }
//            cout << " 分界线 ";
//            for (int k = 0; k < nums.size(); k++) {
//                cout << "(" << nums[k].i << "/" << nums[k].j << ") ";
//            }
//            vector<int> ans = { nums[(n * (n - 1) / 2) - k + 1].i, nums[(n * (n - 1) / 2) - k + 1].j };
//            return ans;
//        }
//        vector<int> ans = { 0, 1 };
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> input = { 1,19,97,101,107,163,191,251,271,641,661,787,811,919,1123,1567,1571,2239,2251,2309,2389,2467,2609,2837,2843,2861,2969,3001,3221,3361,3623,3691,3823,3833,4129,4519,4523,4733,4903,5297,5641,5749,6053,6101,6257,6301,6373,6389,6781,6917,6949,7151,7213,7307,7331,7349,7433,7481,7573,7649,7673,8369,8539,8573,8609,8663,8861,9137,9239,9533,9547,9923,10457,10499,10627,10781,10837,10861,10883,11177,11257,11393,11489,11777,11933,11969,12161,12263,12301,12517,13099,13267,13627,13649,13759,13789,13829,13913,13933,14143,14221,14419,14591,14627,14669,14923,15091,15497,15559,15581,15661,15731,16061,16067,16111,16141,16217,16661,16747,16981,17299,17573,17903,17957,18013,18517,18521,18859,19301,19333,19553,19571,19583,19717,19777,19841,19843,19963,20333,20483,20521,20563,20641,20731,20873,20897,21139,21143,21149,21379,21577,21701,21787,21839,22027,22367,22397,22433,22637,22691,22697,23159,23293,23369,23473,24029,24181,24407,24631,25037,25339,25367,25469,25951,26111,26203,26267,26423,26539,26641,26647,26693,26813,26981,27109,27449,27653,27883,28349,28477,28643,28661,28921,29243,29339,29483,29819,29851,29863,29917 };
//    Solution s;
//    s.kthSmallestPrimeFraction(input, 17993);
//}
