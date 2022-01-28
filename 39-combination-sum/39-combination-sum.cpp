class Solution {
public:
    
    vector<vector<int>> ans;
    
    void find(vector<int> nums,int target,vector<int> arr,int index){
        if(target==0){
            ans.push_back(arr);
            return;
        }
        else if(target<0)
            return;
        for(int i=index;i<nums.size();i++){
            arr.push_back(nums[i]);
            find(nums,target-nums[i],arr,i);
            arr.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        find(nums,target,{},0);
        return ans;
    }
};