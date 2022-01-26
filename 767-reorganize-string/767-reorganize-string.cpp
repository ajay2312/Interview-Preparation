class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
            mp[c]++;
        priority_queue<pair<int,char>> pq;
        for(auto it:mp)
            pq.push({it.second,it.first});
        string ans;
        while(!pq.empty()){
            int a=pq.top().first;
            char c1=pq.top().second;
            pq.pop();
            if(pq.empty()){
                ans.push_back(c1);
                if(a-1>0)
                    pq.push({a-1,c1});
                continue;
            }
            int b=pq.top().first;
            char c2=pq.top().second;
            pq.pop();
            ans.push_back(c1);
            ans.push_back(c2);
            if(b-1>0)
                pq.push({b-1,c2});
            if(a-1>0)
                pq.push({a-1,c1});
        }
        cout<<ans;
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1])
                return "";
        }
        return ans;
    }
};