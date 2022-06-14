//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    int eatenApples(vector<int>& apples, vector<int>& days) {
//        int m = apples.size();
//        if (m == 1) return min(apples[0], days[0]);
//        int ans = 0;
//        int n = 0;
//        int left = 0;
//        for (int i = 0; i < m; i++) {
//            n = max(n, i + days[i] - m);
//            if (apples[i] >= days[i]) left = max(left, apples[i] - (m - i));
//            int eaten[2] = { -1,100000 };
//            for (int j = 0; j <= i; j++) {
//                if (apples[j] > 0 && j + days[j] - i >= 0 && j + days[j] - i < eaten[1]) {
//                    eaten[0] = j;
//                    eaten[1] = j + days[j] - i;
//                }
//            }
//            if (eaten[0] > -1) {
//                ans++;
//                apples[eaten[0]]--;
//            }
//        }
//        cout << ans;
//        return ans + min(n, left);
//    }
//};
//
//int main()
//{
//    vector<int> a = {3,1,1,0,0,2};
//    vector<int> b = {3,1,1,0,0,2};
//    Solution s;
//    s.eatenApples(a, b);
//}