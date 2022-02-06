class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            int ele=nums[j];
            int cnt=0;
            while(j<nums.size() && nums[j]==ele){
                if(cnt<2)
                    nums[i++]=nums[j];
                cnt++;j++;
            }
        }
        return i;
    }
};