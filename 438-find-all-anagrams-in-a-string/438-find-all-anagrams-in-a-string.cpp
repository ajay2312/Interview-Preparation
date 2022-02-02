class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> phash(26,0),hash(26,0);
        vector<int> ans;
        for(char c:p)
            phash[c-97]++;
        int i=0,j=0;
        while(j<s.size()){
            if(j-i+1<p.size()){
                hash[s[j]-97]++;
                j++;
                continue;
            }
            if(j-i+1>p.size()){
                hash[s[i]-97]--;
                i++;
            }
            hash[s[j]-97]++;
            if(hash==phash){
                ans.push_back(i);
            }
            j++;
        }
        return ans;
    }
};