//
// Created by WuFenghong on 2022/6/22.
//
#include "../util.h"
class Solution {
    vector<vector<int>> aid;
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.emplace(root);
        while(!q.empty()){
            vector<int> temp;
            queue<TreeNode*> qTemp;
            while(!q.empty()){
                auto node = q.front();
                temp.emplace_back(node->val);
                if(node->left) qTemp.emplace(node->left);
                if(node->right) qTemp.emplace(node->right);
                q.pop();
            }
            aid.emplace_back(std::move(temp));
            q = std::move(qTemp);
        }
        return aid.back().front();
    }
};

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area()=0;
};
class Circle:public Shape
{
    double radius;
public:
    Circle(double r):radius(r){}
    double area()
    { return 3.14*radius*radius; }
};
class Rect:public Shape
{
    double width,height;
public:
    Rect(int w,int h):width(w),height(h){}
double area()
{ return width*height; }
};
void fun(Shape *sp) {
    cout << sp->area() << endl;
}

#include<cstring>
using namespace std;
class GrandChild {
public:
    GrandChild()
    {
        name = new char[strlen("Unknown") + 1];
                strcpy(name, "Unknown'");
        }
    const char* getName()const { return name; }
    virtual char* getAddress()const= 0;
    ~GrandChild()
    {
        cout << "destroy GrandChild" << endl;
    }
private:
    char *name;
};
class GrandSon : public GrandChild {
public:
    GrandSon(const char* name,const char
    *add){
    address = new char[strlen("add") + 1];
    strcpy(address, add);
}
char* getAddress() const { return address; }
~GrandSon()
{
    cout << "destroy GrandSon" << endl;
}
private:
char *address;
};


int main(){
    GrandChild* gs = new
            GrandSon("Feifei","Shenyang");
    cout << gs->getName() <<"住在" << gs->getAddress() << endl;
    delete gs;
    return 0;

    Solution s;
    s.findBottomLeftValue(buildTree("[1,2,3,4,null,5,6,null,null,7]"));
}