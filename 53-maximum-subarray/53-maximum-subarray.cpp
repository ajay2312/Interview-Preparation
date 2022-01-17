class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans,mx=nums[0];
        ans=mx;
        for(int i=1;i<nums.size();i++){
            mx=max(nums[i],mx+nums[i]);
            if(mx>ans)
                ans=mx;
        }
        return ans;
    }
};