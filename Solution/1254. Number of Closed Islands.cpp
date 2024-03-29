class Solution {  
 
   public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                if(grid[i][j]==0){
                bool close=fun(grid,i,j);
                if(close)ans++;
                }
            }
        }
        return ans;
    }
     bool fun(vector<vector<int>>& grid, int row, int col){
        if(row<0 || row>=grid.size() || col<0 || col>=grid[row].size())
        {
            return false;
        }

        if(grid[row][col]==1)return true;

        grid[row][col]=1;
        bool right = fun(grid,row,col+1);
        bool left = fun(grid,row,col-1);
        bool top = fun(grid,row-1,col);
        bool bottom= fun(grid,row+1,col);

        return right and left and top and bottom;
    }
};
