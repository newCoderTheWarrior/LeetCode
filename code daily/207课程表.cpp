//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//        unordered_map<int, unordered_map<int, int>> prerequisite;
//        for (vector<int> pair : prerequisites) {
//            if (pair[0] == pair[1]) return false;
//            prerequisite[pair[0]][pair[1]]++;
//        }
//        for (int i = 0; i < numCourses; i++) {
//            vector<int> courses = { i };
//            if ((prerequisite[i].size() != 0) && (!dfs(prerequisite, i, courses)))
//                return false;
//        }
//        return true;
//    }
//
//    bool dfs(unordered_map<int, unordered_map<int, int>> prerequisite, int pos, vector<int> courses) {
//        for (unordered_map<int, int>::iterator it = prerequisite[pos].begin();
//            it != prerequisite[pos].end();
//            it++) {
//            for (int course : courses) if (prerequisite[it->first].find(course) != prerequisite[it->first].end()) return false;
//            courses.push_back(it->first);
//            if (prerequisite[it->first].size() != 0)
//                return dfs(prerequisite, it->first, courses);
//        }
//        return true;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> a = { {0,1},{0,2},{1,2} };
//    Solution s;
//    if (s.canFinish(3, a) == true) cout << "true";
//    else cout<<"false";
//}
