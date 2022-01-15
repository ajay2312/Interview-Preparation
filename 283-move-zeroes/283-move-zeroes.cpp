class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,h=0;
        while(l<nums.size() && h<nums.size()){
            if(nums[l]!=0)
                l++;
            else if(nums[h]==0)
                h++;
            else{
                if(l<h){
                    swap(nums[l],nums[h]);
                    l++;
                    h++;
                }
                else
                    h++;
            }
        }
        return;
    }
};