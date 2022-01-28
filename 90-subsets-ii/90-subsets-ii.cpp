class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;
    
    void find(vector<int> nums,int index,vector<int> arr){
        if(index==nums.size()){
            if(st.find(arr)==st.end()){
                ans.push_back(arr);
                st.insert(arr);
            }
            return;
        }
        find(nums,index+1,arr);
        arr.push_back(nums[index]);
        find(nums,index+1,arr);
        arr.pop_back();
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        st.clear();
        sort(nums.begin(),nums.end());
        find(nums,0,{});
        return ans;
    }
};