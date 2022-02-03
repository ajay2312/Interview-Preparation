class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> st;
        for(int p=0;p<n-2;p++){
            for(int q=p+1;q<n-2;q++){
                long long sum=nums[p]+nums[q];
                int i=q+1,j=n-1;
                while(i<j){
                    if(sum+nums[i]+nums[j]==target){
                        st.insert({nums[p],nums[q],nums[i],nums[j]});
                        i++;
                        j--;
                    }
                    else if(sum+nums[i]+nums[j]<target)
                        i++;
                    else
                        j--;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto it:st)
            ans.push_back(it);
        return ans;
    }
};