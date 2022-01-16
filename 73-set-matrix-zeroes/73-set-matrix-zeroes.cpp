class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row=false,col=false;
        if(matrix[0][0]==0)
            row=col=true;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i==0){
                    if(matrix[i][j]==0)
                        row=true;
                }
                else if(j==0){
                    if(matrix[i][j]==0)
                        col=true;
                }
                else if(matrix[i][j]==0)
                    matrix[0][j]=matrix[i][0]=0;
            }
        }
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=matrix[0].size()-1;j>=0;j--){
                if(i==0){
                    if(row)
                        matrix[i][j]=0;
                }
                else if(j==0){
                    if(col)
                        matrix[i][j]=0;
                }
                else if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        }
        if(row || col)
            matrix[0][0]=0;
        return;
    }
};