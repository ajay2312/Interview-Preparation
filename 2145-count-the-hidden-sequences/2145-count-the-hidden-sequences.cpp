class Solution {
public:
    long long numberOfArrays(vector<int>& arr, long long low, long long high) {
        long long n=arr.size(),mx,mn;
        vector<long long> ans(n+1);
        ans[0]=arr[0];
        mn=mx=arr[0];
        for(long long i=0;i<n;i++){
            ans[i+1]=ans[i]+arr[i];
            mn=min(ans[i+1],mn);
            mx=max(ans[i+1],mx);
        }
        if(mn<low){
            long long diff=low-mn;
            mn+=diff;
            mx+=diff;
        }
        if(mx>high){
            long long diff=high-mx;
            mn+=diff;
            mx+=diff;
        }
        if(mn<low || mx>high)
            return 0;
        cout<<mn<<mx;
        int as=(mn-low)+(high-mx);
        return as+1;
    }
};