class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
        for(int i=0;i<points.size();i++){
            int a=points[i][0];
            int b=points[i][1];
            maxh.push({a*a+b*b,{a,b}});
            if(maxh.size()>k)
                maxh.pop();
        }
        vector<vector<int>> ans;
        while(!maxh.empty()){
            ans.push_back({maxh.top().second.first,maxh.top().second.second});
            maxh.pop();
        }
        return ans;
    }
};