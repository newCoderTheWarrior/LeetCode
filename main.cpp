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

int main(){
    //AddBinary a;
    //cout << a.addBinary("0","0");
//    CountBits c;
//    c.countBits(10);
//    FindDiagonalOrder f;
//    f.findDiagonalOrder()
    A* a = new B;
    a->func();
    testvar = 1;
    cout<<testvar<<endl;
    thread_local extern int c;
    return 0;
}