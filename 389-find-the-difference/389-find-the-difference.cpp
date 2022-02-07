class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s)
            mp[c]++;
        for(char c:t){
            if(mp.find(c)==mp.end() || mp[c]==0){
                return c;
            }
            mp[c]--;
        }
        return ' ';
    }
};