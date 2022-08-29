class Solution {
    void dfs_call(vector<vector<char>>& mat,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || mat[x][y]!='1')return;
        
        mat[x][y]='2';
        
        dfs_call(mat,x+1,y,r,c);
        dfs_call(mat,x,y+1,r,c);
        dfs_call(mat,x-1,y,r,c);
        dfs_call(mat,x,y-1,r,c);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        if(row==0)return 0;
        int col=grid[0].size();
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    dfs_call(grid,i,j,row,col);
                    ans+=1;
                }
            }
        }
        return ans;
    }
};