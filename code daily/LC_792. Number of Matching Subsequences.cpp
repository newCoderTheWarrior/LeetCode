//
// Created by WuFenghong on 2022/11/17.
//
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int m = s.size();
        unordered_map<char,deque<int>> dict;
        for(int i = 0; i < m; ++i) {
            dict[s[i]].emplace_back(i);
        }
        int ans = 0;
        auto match = [&](const string& word, unordered_map<char,deque<int>>& umap) {
            int pos = -1;
            for(const auto& c : word) {
                if(!umap.count(c)) return false;
                else {
                    auto& vec = umap[c];
                    auto it = upper_bound(vec.begin(),vec.end(),pos);
                    /*int n = vec.size();
                    int p = 0;
                    while(p<n && vec[p] <= pos) ++p;*/
                    if(it == vec.end()) return false;
                    pos = *it;
                }
            }
            return true;
        };
        for(const auto& word : words) {
            if(match(word,dict)) ++ans;
        }
        return ans;
    }
};