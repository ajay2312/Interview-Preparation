class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int ele : nums){
            minh.push(ele);
            if(minh.size()>k)
                minh.pop();
        }
        return minh.top();
    }   
};