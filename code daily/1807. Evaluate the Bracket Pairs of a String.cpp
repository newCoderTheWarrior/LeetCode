//
// Created by WuFenghong on 2023/1/12.
//
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> umap;
        for(const auto& pair : knowledge) {
            umap[pair.front()] = pair.back();
        }
        string ans;
        string temp;
        int n = s.size();
        for(int i = 0; i < n; ++i) {
            if(s[i] == '(') {
                ++i;
                while(s[i] != ')') temp += s[i++];
                if(umap.count(temp)) ans += umap[temp];
                else ans += "?";
                temp.clear();
            }
            else ans += s[i];
        }
        return ans;
    }
};