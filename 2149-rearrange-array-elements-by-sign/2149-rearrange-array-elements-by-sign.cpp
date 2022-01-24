class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> ans(arr.size());
        int p=0,n=0,k=0;
        while(n<arr.size() && p<arr.size()){
            if(arr[p]<0){
                p++;
            }
            else if(arr[n]>0){
                n++;
            }
            else{
                ans[k++]=arr[p++];
                ans[k++]=arr[n++];
            }
        }
        return ans;
    }
};