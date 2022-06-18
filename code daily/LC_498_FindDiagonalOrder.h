//
// Created by WuFenghong on 2022/6/14.
//

#ifndef LEETCODE_LC_498_FINDDIAGONALORDER_H
#define LEETCODE_LC_498_FINDDIAGONALORDER_H
#include <bits/stdc++.h>
using namespace std;
static int testvar = 0;
class FindDiagonalOrder {
    constexpr static int directions[2][2] = {{-1,1},{1,-1}};
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> ans;
        ans.reserve(m*n);
        int i = 0, j = 0, direction = 0;
        auto check = [&](auto posX, auto posY) {
            return posX >= 0 && posX < m && posY >= 0 && posY < n;
        };
        while(check(i,j)) {
            ans.emplace_back(mat[i][j]);
            auto [xOfs, yOfs] = directions[direction];
            auto tempI = i + xOfs, tempJ = j + yOfs;
            if(check(tempI,tempJ)) {
                i = tempI;
                j = tempJ;
            }else {
                if(direction == 0) {
                    ++j;
                    if(!check(i,j)) {
                        --j;
                        ++i;
                    }
                }else {
                    ++i;
                    if(!check(i,j)) {
                        --i;
                        ++j;
                    }
                }
                ++direction;
                if(direction == 2) direction = 0;
            }
        }
        return ans;
    }
};

#endif //LEETCODE_LC_498_FINDDIAGONALORDER_H
