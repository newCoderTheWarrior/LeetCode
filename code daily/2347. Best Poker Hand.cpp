//
// Created by WuFenghong on 2023/2/20.
//
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> countRank;
        for(const auto& num : ranks) ++countRank[num];
        unordered_map<char, int> countSuit(4);
        for(const auto& c : suits) ++countSuit[c];
        if(countSuit.size() == 1) return "Flush";
        else {
            if(countRank.size()< 3 || (countRank.size() == 3 && [&](){
                for(const auto& [k,v] : countRank) {
                    if(v == 3) return true;
                }
                return false;
            }())) return "Three of a Kind";
            else {
                if([&](){
                    for(const auto& [k,v] : countRank) {
                        if(v == 2) return true;
                    }
                    return false;
                }()) return "Pair";
                else return "High Card";
            }
        }
    }
};