class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        for(int i=0;i<n-2;i++){
            int target=-nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==target){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]>target)
                    k--;
                else
                    j++;
            }
        }
        for(auto it : st)
            ans.push_back(it);
        return ans;
    }
};