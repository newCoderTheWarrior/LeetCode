//
// Created by WuFenghong on 2022/12/25.
//
#include "../util.h"
/*
class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        if(words[startIndex] == target) return 0;
        int frontAns = 0, backAns = 0;
        bool isExist = false;
        for(int i = startIndex - 1; i != startIndex; --i) {
            if(i == -1) i = n-1;
            if(i == startIndex) break;
            ++frontAns;
            if(words[i] == target){
                isExist = true;
                break;
            }
        }
        for(int i = startIndex + 1; i != startIndex; ++i) {
            if(i == n) i = 0;
            if(i == startIndex) break;
            ++backAns;
            if(words[i] == target){
                isExist = true;
                break;
            }
        }
        if(!isExist) return -1;
        else return min(frontAns,backAns);
    }
};
*/
/*
 * ["hello","i","am","leetcode","hello"]
"hello"
1
["a","b","leetcode"]
"leetcode"
0
["i","eat","leetcode"]
"ate"
0
 * */

class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        vector<int> dict(3,0);
        for(const auto& c : s) dict[c-'a']++;
        for(const auto& v : dict) if(v < k) return -1;
        int front = 0, back = n-1;
        dict = {0,0,0};
        auto check = [&](){
            for(const auto& v : dict) if(v < k) return true;
            return false;
        };
        int ans = 0;
        while(check()) {
            if(dict[s[front]-'a'] > dict[s[back]-'a']) {
                ++dict[s[back]-'a'];
                --back;
            }
            else {
                ++dict[s[front]-'a'];
                ++front;
            }
            ++ans;
        }
        return ans;
    }
};

int main(){
    vector<string> v{"i","eat","leetcode"};
    string target = "ate";
    Solution s;
    s.closetTarget(v,target,0);
}