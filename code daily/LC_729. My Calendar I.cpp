//
// Created by WuFenghong on 2022/7/19.
//
class MyCalendar {
    vector<pair<int,int>> books;
public:
    MyCalendar() {
        books.clear();
    }

    bool book(int start, int end) {
        if(books.empty()){
            books.emplace_back(make_pair(start,end));
            return true;
        }
        for(const auto& p : books){
            if(!(p.first >= end || p.second <= start))
                return false;
        }
        books.emplace_back(make_pair(start,end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */