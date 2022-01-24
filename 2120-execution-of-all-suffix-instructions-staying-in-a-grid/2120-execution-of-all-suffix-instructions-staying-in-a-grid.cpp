class Solution {
public:
    
    vector<int> ans;
    
    void simulate(int pos,int n,vector<int> arr,string s){
        int row=arr[0],col=arr[1];
        int cnt=0;
        for(int i=pos;i<s.size();i++){
            if(s[i]=='U')
                row--;
            else if(s[i]=='D')
                row++;
            else if(s[i]=='L')
                col--;
            else
                col++;
            if(row<0 || row>=n || col<0 || col>=n){
                ans.push_back(cnt);
                return;
            }
            cnt++;
        }
        ans.push_back(cnt);
        return;
    }
    
    vector<int> executeInstructions(int n, vector<int>& arr, string s) {
        for(int i=0;i<s.size();i++)
            simulate(i,n,arr,s);
        return ans;
    }
};