//
// Created by WuFenghong on 2023/1/9.
//
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

#include "../util.h"

class MountainArray {
    vector<int> nums;
public:
    MountainArray(vector<int>& nums) {
        this->nums = nums;
    }
    int get(int index){return nums.at(index);};
    int length(){return nums.size();};
};

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();

        auto findPeer = [&](int low, int high){
            int mid;
            if(mountainArr.get(0) > mountainArr.get(1)) return 0;
            if(mountainArr.get(n-1) > mountainArr.get(n-2)) return 0;
            while(low < high) {
                mid = (high-low)/2 + low;
                if(mid != 0 && mid != n-1 && mountainArr.get(mid) > mountainArr.get(mid-1) && mountainArr.get(mid) > mountainArr.get(mid+1)) {
                    return mid;
                }
                else {
                    if((mid != 0 && mountainArr.get(mid) > mountainArr.get(mid-1)) || (mid != n-1 && mountainArr.get(mid) < mountainArr.get(mid+1))) low = mid + 1;
                    else high = mid - 1;
                }
            }
            return (high-low)/2 + low;
        };

        auto binarySearchP = [&](int low, int high){
            if(mountainArr.get(low) > target || mountainArr.get(high) < target) return -1;
            int mid;
            while(low < high) {
                mid = (high-low)/2 + low;
                if(mountainArr.get(mid) == target) return mid;
                else {
                    if(mountainArr.get(mid) > target) high = mid - 1;
                    else low = mid + 1;
                }
            }
            return mountainArr.get((high-low)/2 + low) == target ? ((high-low)/2 + low) : -1;
        };

        auto binarySearchN = [&](int low, int high){
            if(mountainArr.get(low) < target || mountainArr.get(high) > target) return -1;
            int mid;
            while(low < high) {
                mid = (high-low)/2 + low;
                if(mountainArr.get(mid) == target) return mid;
                else {
                    if(mountainArr.get(mid) > target) low = mid + 1;
                    else high = mid-1;
                }
            }
            return mountainArr.get((high-low)/2 + low) == target ? ((high-low)/2 + low) : -1;
        };

        int pos = findPeer(0,n-1);
        int posL = binarySearchP(0,pos);
        int posR = binarySearchN(pos,n-1);
        return posL != -1 ? posL : posR;
    }
};

int main(){
    vector<int> nums{3,5,3,2,0};
    MountainArray m(nums);
    Solution s;
    s.findInMountainArray(0,m);
}