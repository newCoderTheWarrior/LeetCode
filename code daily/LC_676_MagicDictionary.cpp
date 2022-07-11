//
// Created by WuFenghong on 2022/7/11.
//
class MagicDictionary {
private:
    unordered_set<string> dict;
public:
    MagicDictionary() {
        dict.clear();
    }

    void buildDict(vector<string> dictionary) {
        dict = unordered_set<string>(dictionary.begin(),dictionary.end());
    }

    bool search(string searchWord) {
        int n = searchWord.size();
        for(int i = 0; i < n; ++i){
            char origin = searchWord[i];
            for(char j = 'a'; j <= 'z'; ++j){
                if(j == origin) continue;
                searchWord[i] = j;
                if(dict.count(searchWord)) return true;
            }
            searchWord[i] = origin;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */