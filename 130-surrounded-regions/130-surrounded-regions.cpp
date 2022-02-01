class Solution {
public:
    
    void dfs(vector<vector<char>>& mat,int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)
            return;
        else if(mat[i][j]=='X' || mat[i][j]=='#')
            return;
        mat[i][j]='#';
        dfs(mat,i+1,j,n,m);
        dfs(mat,i-1,j,n,m);
        dfs(mat,i,j+1,n,m);
        dfs(mat,i,j-1,n,m);
    }
    
    void solve(vector<vector<char>>& mat) {
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O')
                dfs(mat,i,0,n,m);
            if(mat[i][m-1]=='O')
                dfs(mat,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(mat[0][i]=='O')
                dfs(mat,0,i,n,m);
            if(mat[n-1][i]=='O')
                dfs(mat,n-1,i,n,m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='#')
                    mat[i][j]='O';
                else if(mat[i][j]=='O')
                    mat[i][j]='X';
            }
        }
        return;
    }
};