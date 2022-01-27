class Solution {
public:
    
    vector<vector<int>> ans;
    
    void find(vector<int> nums,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            find(nums,index+1);
            swap(nums[i],nums[index]);
        }
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        find(nums,0);
        return ans;
    }
};