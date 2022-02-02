class Solution {
public:
    
    void dfs(vector<vector<int>>& mat,int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        else if(mat[i][j]==0 || mat[i][j]==-1)
            return;
        mat[i][j]=-1;
        dfs(mat,i+1,j,n,m);
        dfs(mat,i-1,j,n,m);
        dfs(mat,i,j+1,n,m);
        dfs(mat,i,j-1,n,m);
    }
    
    int numEnclaves(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][0]==1)
                dfs(mat,i,0,n,m);
            if(mat[i][m-1]==1)
                dfs(mat,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(mat[0][i]==1)
                dfs(mat,0,i,n,m);
            if(mat[n-1][i]==1)
                dfs(mat,n-1,i,n,m);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)
                    cnt++;
            }
        }
        return cnt;
    }
};