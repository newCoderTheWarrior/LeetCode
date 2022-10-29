//
// Created by WuFenghong on 2022/10/29.
//
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        auto ans = 0;
        for(const auto& item : items) {
            if((ruleKey == "type" && ruleValue == item.front()) ||
               (ruleKey == "color" && ruleValue == item.at(1)) ||
               (ruleKey == "name" && ruleValue == item.back())
                    ) ++ans;
        }
        return ans;
    }
};