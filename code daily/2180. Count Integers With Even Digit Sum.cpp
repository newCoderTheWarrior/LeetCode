//
// Created by WuFenghong on 2023/1/6.
//
unordered_map<int,int> dict;

auto _ = [](){
    int count = 0;
    auto check = [](int num) {
        int sum = 0;
        while(num > 0) {
            sum += num%10;
            num /= 10;
        }
        return sum%2==0;
    };
    for(int i = 1; i < 1001; ++i) {
        if(check(i)) ++count;
        dict[i] = count;
    }
    return 0;
}();

class Solution {
public:
    int countEven(int num) {
        return dict[num];
    }
};