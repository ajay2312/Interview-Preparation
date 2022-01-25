class Solution {
public:
    
    void find(vector<vector<char>> &grid,int n,int m,int i,int j,vector<vector<int>> &visited){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0' || visited[i][j])
            return;
        visited[i][j]=1;
        find(grid,n,m,i+1,j,visited);
        find(grid,n,m,i,j+1,visited);
        find(grid,n,m,i-1,j,visited);
        find(grid,n,m,i,j-1,visited);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    cnt++;
                    find(grid,n,m,i,j,visited);
                }
            }
        }
        return cnt;
    }
};