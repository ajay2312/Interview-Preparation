class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int ans=0;
        int value=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>value)
                ans=max(ans,arr[i]-value);
            value=min(value,arr[i]);
        }
        return ans;
    }
};