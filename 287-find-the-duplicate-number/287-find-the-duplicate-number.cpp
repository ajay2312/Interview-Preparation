class Solution {
public:
    
    int find(vector<int> arr,int num){
        int cnt=0;
        for(int x:arr){
            if(x<=num)
                cnt++;
        }
        return cnt;
    }
    
    int findDuplicate(vector<int>& arr) {
        int low=1,high=arr.size();
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(find(arr,mid)>mid){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};