class Solution {
public:
    
    vector<int> nsr(vector<int> heights){
        stack<pair<int,int>> st;
        vector<int> ans(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() && st.top().first>=heights[i])
                st.pop();
            if(st.empty())
                ans[i]=heights.size();
            else
                ans[i]=st.top().second;
            st.push({heights[i],i});
        }
        return ans;
    }
    
    vector<int> nsl(vector<int> heights){
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && st.top().first>=heights[i])
                st.pop();
            if(st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top().second);
            st.push({heights[i],i});
        }
        return ans;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int> right=nsr(heights);
        vector<int> left=nsl(heights);
        // for(int i=0;i<left.size();i++)
        //     cout<<left[i]<<" ";
        int mx=0;
        for(int i=0;i<heights.size();i++)
            mx=max(mx,(right[i]-left[i]-1)*heights[i]);
        return mx;
    }
};