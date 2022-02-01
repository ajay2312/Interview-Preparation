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
        // vector<int> dp(n+1,1);
        int prev1=1,prev2=1;
        for(int i=2;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};