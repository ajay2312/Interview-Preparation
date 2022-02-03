class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mn=INT_MAX;
        int ans;
        int n=nums.size();
        for(int k=0;k<n-2;k++){
            int i=k+1,j=nums.size()-1;
            while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<mn){
                    mn=abs(target-sum);
                    ans=sum;
                }
                // cout<<mn<<"\n";
                if(sum<target)
                    i++;
                else
                    j--;
            }
        }
        return ans;
    }
};