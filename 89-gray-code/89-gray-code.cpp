class Solution {
public:
    
    vector<string> find(int n){
        if(n==1)
            return {"0","1"};
        vector<string> v=find(n-1);
        vector<string> ans;
        for(int i=0;i<v.size();i++)
            ans.push_back("0"+v[i]);
        for(int i=v.size()-1;i>=0;i--)
            ans.push_back("1"+v[i]);
        return ans;
    }
    
    int convert(string str){
        int value=0;
        for(int i=str.size()-1;i>=0;i--){
            value+=(str[i]-48)*(1<<(str.size()-1-i));
        }
        return value;
    }
    
    vector<int> grayCode(int n) {
        vector<string> v=find(n);
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            ans.push_back(convert(v[i]));
        }
        return ans;
    }
};