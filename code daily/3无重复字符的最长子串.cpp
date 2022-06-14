//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int max = 0;
//        if (s.size() == 1)
//        {
//            return 1;
//        }
//        for (int i = 0; i < s.size(); i++)
//        {
//            unordered_map<char, int> umap;
//            umap[s[i]]++;
//            for (int j = i + 1; j < s.size(); j++)
//            {
//                auto iterator = umap.find(s[j]);
//                if (iterator != umap.end())
//                {
//                    if (max <= umap.size())
//                    {
//                        max = umap.size();
//                    }
//                    break;
//                }
//                else
//                {
//                    if (j == s.size() - 1)
//                    {
//                        if (max <= umap.size() + 1)
//                        {
//                            max = umap.size() + 1;
//                        }
//                    }
//                    umap[s[j]]++;
//                }
//            }
//        }
//        return max;
//    }
//};