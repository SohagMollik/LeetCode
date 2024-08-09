class Solution {
public:
    
    bool isMagicSquare(int i, int j, vector<vector<int>>& grid){
        
        //check all values are distinct
        vector<int>check(10, 0);
        
        for(int x=0; x<3; ++x){
            for(int y=0; y<3; ++y){
                int num = grid[i+x][j+y];
                if(num<1 or num>9 or check[num]>0)return false;
                check[num]++;
            }
        }
        
        // check first row sum
        int sum = grid[i][j] + grid[i][j+1] + grid[i][j+2];
        
        // check all row sum
        for(int x=0; x<3; ++x){
            if(sum!=grid[i+x][j] + grid[i+x][j+1] + grid[i+x][j+2]) return false;
        }
        
        // check all col sum
        for(int y=0; y<3; ++y){
            if(sum!=grid[i][j+y] + grid[i+1][j+y] + grid[i+2][j+y]) return false;
        }
        
        // check diagonal
        if(sum!=grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2])return false;
        if(sum!=grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j])return false;
        
        
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
       
        int row = grid.size();
        int col = grid[0].size();
        int ans=0;
        
        for(int i=0; i<=row-3; ++i){
            for(int j=0; j<=col-3; ++j){
              if(isMagicSquare(i, j, grid)){
                  ans++;
              }
            }
        }
        
        return ans;
    }
};