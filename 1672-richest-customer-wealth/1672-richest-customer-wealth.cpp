class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++)
                sum+=mat[i][j];
            ans=max(sum,ans);
        }
        return ans;
    }
};