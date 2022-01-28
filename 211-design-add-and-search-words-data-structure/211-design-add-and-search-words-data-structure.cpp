class WordDictionary {
public:
    unordered_map<int,vector<string>> mp;
    WordDictionary() {
        mp.clear();
    }
    
    void addWord(string word) {
        mp[word.size()].push_back(word);
    }
    
    bool search(string word) {
        int n=word.size();
        for(int i=0;i<mp[n].size();i++){
            string str=mp[n][i];
            bool temp=true;
            for(int j=0;j<word.size();j++){
                if(word[j]=='.')
                    continue;
                if(word[j]!=str[j]){
                    temp=false;
                    break;
                }
            }
            if(temp)
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */