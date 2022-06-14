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
//
//    Solution() { m = 0, n = 0, k = 0; }
//
//    bool exist(vector<vector<char>>& board, string word) {
//        m = board.size(), n = board[0].size(), k = word.size();
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if ((n - j - 1 + n * (m - i - 1)) < k) return false;
//                if (board[i][j] == word[0])
//                {
//                    chosen.clear();
//                    vector<vector<int>> findTable;
//                    int tempI = i, tempJ = j;
//                    for (int g = 1; g < k; g++)
//                    {
//                        if (!findChar(board, word[g], tempI, tempJ)){
//
//                        } 
//                        else {
//                            
//                        }
//                    }
//                    return true;
//                }
//            L:;
//            }
//        }
//        return false;
//    }
//
//    bool findChar(vector<vector<char>>& board, char word, int i, int j)
//    {
//        string s;
//        toString(s, i, j - 1);
//        int isFind = 0;
//        if (isInBoard(board, i, j - 1) && (chosen.find(s) == chosen.end()) && (board[i][j - 1] == word))
//        {
//            found[2][0] = i;
//            found[2][1] = j - 1;
//            isFind++;
//        }
//        else chosen[s]++;
//        toString(s, i, j + 1);
//        if (isInBoard(board, i, j + 1) && (chosen.find(s) == chosen.end()) && (board[i][j + 1] == word))
//        {
//            isFind++;
//            found[3][0] = i;
//            found[3][1] = j + 1;
//        }
//        else chosen[s]++;
//        if (isInBoard(board, i - 1, j) && (chosen.find(s) == chosen.end()) && (board[i - 1][j] == word))
//        {
//            isFind++;
//            found[0][0] = i - 1;
//            found[0][1] = j;
//        }
//        else chosen[s]++;
//        if (isInBoard(board, i + 1, j) && (chosen.find(s) == chosen.end()) && (board[i + 1][j] == word))
//        {
//            isFind++;
//            found[1][0] = i + 1;
//            found[1][1] = j;
//        }
//        else chosen[s]++;
//        return (isFind == 0)?false:true;
//    }
//
//    void toString(string& s, int i, int j)
//    {
//        s = "";
//        s += to_string(i);
//        s += ",";
//        s += to_string(j);
//    }
//
//    bool isInBoard(vector<vector<char>>& board, int i, int j)
//    {
//        return ((i >= 0) && (i < m) && (j >= 0) && (j < n)) ? true : false;
//    }
//
//    int m, n, k;
//    int found[4][2];
//    unordered_map<string, int> chosen;
//};
//
//int main()
//{
//    vector<vector<char>> board =
//    { {'A','B','C','E'}, {'S','F','C','S'}, {'A','D','E','E'}};
//    Solution S;
//    S.exist(board, "SEE");
//}