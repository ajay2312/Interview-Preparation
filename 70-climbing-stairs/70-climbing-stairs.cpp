class Solution {
public:
    
    // int find(int n,vector<int> &dp){
    //     if(n==0  || n==1)
    //         return 1;
    //     if(dp[n]!=-1)
    //         return dp[n];
    //     return dp[n]=find(n-1,dp)+find(n-2,dp);
    // }
    
    int climbStairs(int n) {
        vector<int> dp(n+1,1);
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};