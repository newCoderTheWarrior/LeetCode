//
// Created by WuFenghong on 2022/12/8.
//
class Solution {
public:
    unordered_set<char> s{'a','c','e','g'};
    bool squareIsWhite(string coordinates) {
        return s.count(coordinates.front()) ? coordinates.back()%2 == 0 : coordinates.back()%2 != 0;
    }
};