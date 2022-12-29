//
// Created by WuFenghong on 2022/12/29.
//
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> nums;
        unordered_set<int> dict1,dict2;
        for(const auto& num : nums1) {
            if(!dict1.count(num)) {
                dict1.insert(num);
            }
        }
        for(const auto& num : nums2) {
            if(dict1.count(num)) {
                nums.insert(num);
            }
            else {
                dict2.insert(num);
            }
        }
        for(const auto& num : nums3) {
            if(dict1.count(num) || dict2.count(num)) {
                nums.insert(num);
            }
        }
        return vector<int>(nums.begin(),nums.end());
    }
};