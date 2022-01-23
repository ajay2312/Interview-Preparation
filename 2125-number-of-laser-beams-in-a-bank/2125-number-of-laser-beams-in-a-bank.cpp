class Solution {
public:
    int numberOfBeams(vector<string>& arr) {
        int ans=0;
        int flag=0;
        for(string str : arr){
            int cnt=0;
            for(char c : str){
                if(c=='1')
                    cnt++;
            }
            if(cnt!=0){
                if(!flag)
                    flag=cnt;
                else{
                    ans+=flag*cnt;
                    flag=cnt;
                }
            }
        }
        return ans;
    }
};