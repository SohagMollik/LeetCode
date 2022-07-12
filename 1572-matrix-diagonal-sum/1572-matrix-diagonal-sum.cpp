class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();
        if(row&1){
            int x=0,y=0;
            for(int i=0;i<row;++i){
                for(int j=0;j<col;++j){
                    if(i==j)x+=mat[i][j];
                    if((i+j)==row-1)y+=mat[i][j];
                }
            }
            int idx=mat[row/2][col/2];
            
            return (x+y)-idx;
           
        }
        else{
          int x=0,y=0;
            for(int i=0;i<row;++i){
                for(int j=0;j<col;++j){
                    if(i==j)x+=mat[i][j];
                    if((i+j)==row-1)y+=mat[i][j];
                }
            }
           
            
            return (x+y);  
        }
    }
};