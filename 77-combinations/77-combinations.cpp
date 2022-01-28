class Solution {
public:
    
    vector<vector<int>> ans;
    
    void find(int index,int n,int k,vector<int> arr){
        if(k==0){
            ans.push_back(arr);
            return;
        }
        for(int i=index;i<=n;i++){
            arr.push_back(i);
            find(i+1,n,k-1,arr);
            arr.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        find(1,n,k,{});
        return ans;
    }
};