//
// Created by WuFenghong on 2022/7/16.
//
#include "../util.h"
class MovingAverage {
private:
    int sizeCur;
    int capacity;
    int sum;
    deque<int> nums;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        capacity = size;
        sizeCur = 0;
        sum = 0;
    }

    double next(int val) {
        sum += val;
        nums.emplace_back(val);
        if(nums.size() > capacity){
            sum -= nums.front();
            nums.pop_front();
        }
        if(sizeCur < capacity) ++sizeCur;
        double ans = (double)sum / (double)sizeCur;
        return ans;
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */

int main(){
    MovingAverage m(5);
    m.next(12009);
    m.next(1965);
    m.next(-940);
    m.next(-8516);
    m.next(-16446);
    m.next(7870);
    m.next(25545);
    m.next(-21028);
    m.next(18430);
    m.next(-23464);
}