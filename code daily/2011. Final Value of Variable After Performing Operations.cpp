//
// Created by WuFenghong on 2022/12/23.
//
auto _=[](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

unordered_map<string,int> dict = {
        {"X++",1},
        {"++X",1},
        {"X--",-1},
        {"--X",-1}
};

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(const auto& s : operations) ans += dict[s];
        return ans;
    }
};