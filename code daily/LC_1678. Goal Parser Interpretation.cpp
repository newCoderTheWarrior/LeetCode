//
// Created by WuFenghong on 2022/11/6.
//
class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string ans;
        for(int i = 0; i < n; ++i) {
            if(command[i] == 'G') ans += "G";
            else {
                if(command[i+1] == 'a') {
                    ans += "al";
                    i += 3;
                }
                else {
                    ans += "o";
                    i++;
                }
            }
        }
        return ans;
    }
};