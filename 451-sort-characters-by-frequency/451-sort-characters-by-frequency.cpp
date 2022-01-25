class Solution {
public:
    
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto m : mp){
            pq.push({m.second,m.first});
        }
        int k=0;
        while(!pq.empty()){
            int value=pq.top().first;
            while(value--)
                s[k++]=pq.top().second;
            pq.pop();
        }
        return s;
    }
};