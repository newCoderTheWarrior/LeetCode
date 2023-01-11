//
// Created by WuFenghong on 2023/1/3.
//
#include "../util.h"

class Solution2 {
public:
    bool areNumbersAscending(string s) {
        int n = s.size();
        string str;
        string pre;
        for(int i = 0; i < n; ++i) {
            if(s[i] >= '0' && s[i] <= '9') {
                str += s[i];
                if(i == n-1) {
                    auto num1 = stoi(pre);
                    auto num2 = stoi(str);
                    if(num2 <= num1) return false;
                }
            }
            else {
                if(!str.empty()) {
                    auto num1 = stoi(pre);
                    auto num2 = stoi(str);
                    if(num2 <= num1) return false;
                    pre = str;
                    str.clear();
                }
            }
        }
        return true;
    }
};

class Solution1 {
public:
    int minOperations(vector<int> nums, int x) {
        int n = nums.size();
        auto sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum < x) return -1;
        //if(sum == x) return n;
        auto minNum = min_element(nums.begin(), nums.end());
        if (*minNum > x) return -1;
        thread t([](){
            int i = 0;
            while (true) {
                this_thread::sleep_for(1s);
                ++i;
                cout << "time fly, " << i << " seconds passed!" << endl;
            }
        });
        function<int(int l, int r, int left, int count, char dire)> dfs = [&](int l, int r, int left, int count, char dire) {
            if (left == 0) {
                return count;
            }
            else {
                if (l > r || left < 0) return -1;
            }
            int count1 = dfs(l + 1, r, left - nums[l], count + 1,'L');
            int count2 = dfs(l, r - 1, left - nums[r], count + 1,'R');
            cout << count1 << " " << count2 << endl;
            if (count1 == -1 && count2 == -1) return -1;
            if (count1 != -1 && count2 != -1) return min(count1, count2);
            if (count2 != -1) return count2;
            return count1;
        };
        return dfs(0, n - 1, x, 0,'0');
    }
};

class Solution {
public:
    bool digitCount(string num) {
        int n = num.size();
        unordered_map<char,int> count;
        for(const auto& digit : num) ++count[digit];
        for(int i = 0; i < n; ++i) if(count[i+'0'] != int(num[i])-'0') return false;
        return true;
    }
};

int main(){
    Solution s;
    s.digitCount("1210");
}