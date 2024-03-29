class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        //int vis[n][m] = {0};
        vector<vector<int>> vis( n , vector<int> (m, 0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(i==0 || j==0 || i==(n-1) || j==(m-1)){
                    if(grid[i][j]==1){
                        q.push({i,j});
                        vis[i][j]=1;
                    }
                }
            }
        }
       
        vector<int>delrow = {-1,0,+1,0};
        vector<int>delcol = {0,+1,0,-1};

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            for(int i=0;i<4;++i){
                int neighborRow = row + delrow[i];
                int neighborCol = col + delcol[i];
                if(neighborRow>=0 && neighborRow<n && neighborCol>=0 && neighborCol<m && vis[neighborRow][neighborCol]==0 && grid[neighborRow][neighborCol]==1){
                    q.push({neighborRow,neighborCol});
                    vis[neighborRow][neighborCol]=1;
                }
            }
        }
        int ans=0;

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(vis[i][j]==0 && grid[i][j]==1)ans++;
            }
        }
        return ans;
    }
};
