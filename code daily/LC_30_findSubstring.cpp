//
// Created by WuFenghong on 2022/6/23.
//
#include "../util.h"

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int m = s.size(), len = words.front().size(), n = words.size() * len;
        if(m < n) return {};
        unordered_map<string,int> u_map;
        for(const auto& word : words) {
            ++u_map[word];
            if(s.find(word) == string::npos) return {};
        }
        vector<int> ans;
        auto check = [&](unordered_map<string,int>& uset, int pos){
            string temp = s.substr(pos, len);
            while(!temp.empty()) {
                if(uset.count(temp)) {
                    --uset[temp];
                    if(uset[temp] == 0) uset.erase(temp);
                    if(uset.empty()) return true;
                    temp = s.substr(pos = pos + len, len);
                }
                else return false;
            }
            return false;
        };
        for(int i = 0; i <= m - n; ++i){
            unordered_map<string,int> usetCopy = u_map;
            if(check(usetCopy,i)) ans.emplace_back(i);
        }
        return ans;
    }
};

int main(){
    vector<int> v1;
    cout << v1.capacity() << " " << v1.size();
    string s{"lingmindraboofooowingdingbarrwingmonkeypoundcake"};
    vector<string> v{"fooo","barr","wing","ding","wing"};
    Solution su;
    su.findSubstring(s,v);
}