//
// Created by WuFenghong on 2023/1/20.
//
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k,0);
        unordered_map<int,unordered_set<int>> umap;
        for(const auto& log : logs) {
            umap[log.front()].emplace(log.back());
        }
        for(const auto& [key,val] : umap) {
            if(val.size() >= 1 && val.size() <= k) {
                ++ans[val.size()-1];
            }
        }
        return ans;
    }
};