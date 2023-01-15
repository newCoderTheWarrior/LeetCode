//
// Created by WuFenghong on 2023/1/15.
//
#include "../util.h"

class Solution1 {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(const auto& query : queries) {
            for(int i = query.front(); i <= query[2]; ++i) {
                for(int j = query[1]; j <= query.back(); ++j) {
                    ans[i][j] += 1;
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans = 0;
        int left = 0;
        int n = nums.size();
        auto check = [&](unordered_map<int,int>& umap) {
            int count = 0;
            for(const auto& [key,val] : umap) {
                count += val*(val-1)/2;
            }
            return count >= k;
        };
        unordered_map<int,int> umap;
        for(int i = 0; i < n; ++i) {
            umap[nums[i]]++;
            if(!check(umap)) continue;
            else {
                while(left < i && check(umap)) {
                    ans += n - i;
                    umap[nums[left]]--;
                    if(umap[nums[left]] <= 0) umap.erase(nums[left]);
                    ++left;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,1,3,2,3,3,3,1,1,3,2,2,2};
    s.countGood(nums,18);
}