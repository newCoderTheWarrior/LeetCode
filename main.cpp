//
// Created by WuFenghong on 2022/6/13.
//
#include <bits/stdc++.h>
#include "JZOF/JZ_2_2_AddBinary.h"
#include "code daily/LC_338_CountBits.h"
#include "code daily/LC_498_FindDiagonalOrder.h"
using namespace std;

class A{
public:
    void func(){
        cout<<"A"<<endl;
    }
};

class B : public A{
public:
    void func(){
        return;
    }
};

class Test{
public:
    vector<int> v;
    Test(initializer_list<int> l){
        v = std::move(vector(l.begin(),l.end()));
    }
};
bool func(int num){return true;}


auto func(auto a, auto b, auto sum) {
    for(auto it = a.begin(); it != a.end(); ++it) {
        if(b.count([&](auto r){
            return (*it) % 2 == 0 ?  (*it)/2 : (*it)/2 + 1;
        }(*it))) {
            for(const auto& [key,val] : b[*it]) {
                sum += [](auto num){
                    return func(num);
                }(val) ? key : -1;
            }
        }
    }
    return sum;
}
