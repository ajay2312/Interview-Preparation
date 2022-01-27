class Solution {
public:
    
    vector<vector<int>> ans;
    
    void find(vector<int> nums,int index){
        if(index==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        find(nums,index+1);
        for(int i=index+1;i<nums.size();i++){
            if(nums[i]!=nums[index]){
                swap(nums[i],nums[index]);
                find(nums,index+1);
                //swap(nums[i],nums[index]);
            }
        }
        return;
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        find(nums,0);
        return ans;
    }
};