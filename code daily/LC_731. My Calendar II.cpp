//
// Created by WuFenghong on 2022/7/19.
//
#include "../util.h"
using namespace std;

class MyCalendarTwo {
    vector<pair<int,int>> books;
    vector<pair<int,int>> doubleBooks;
public:
    MyCalendarTwo() {
        books.clear();
        doubleBooks.clear();
    }

    bool book(int start, int end) {
        for(const auto& p : doubleBooks){
            if(!(p.second <= start || p.first >= end)) return false;
        }
        for(const auto& p : books){
            if(!(p.second <= start || p.first >= end)) {
                doubleBooks.emplace_back(max(p.first,start), min(p.second,end));
            }
        }
        books.emplace_back(start,end);
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */

int main(){
    MyCalendarTwo m;
    m.book(10,20);
    m.book(50,60);
    m.book(10,40);
    m.book(5,15);
    m.book(5,10);
    m.book(25,55);
}