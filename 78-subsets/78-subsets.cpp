class Solution {
public:
    
    vector<vector<int>> ans;
    
    void find(int index,vector<int> nums,vector<int> arr){
        if(index==nums.size()){
            ans.push_back(arr);
            return;
        }
        find(index+1,nums,arr);
        arr.push_back(nums[index]);
        find(index+1,nums,arr);
        arr.pop_back();
        return;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> arr;
        find(0,nums,arr);
        return ans;
    }
};