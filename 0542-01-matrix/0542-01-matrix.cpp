class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        
        vector<vector<int>>visited(row,vector<int>(col,0));
        vector<vector<int>>distance(row,vector<int>(col,0));
        
        queue<pair<pair<int,int>,int>>Q;
        
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j){
                if(mat[i][j]==0){
                    Q.push({{i,j},0});
                    visited[i][j]=1;
                }
                else{
                  visited[i][j]=0;  
                }
            }
        }
        
        int delrow[] = {+1,0,-1,0};
        int delcol[] = {0,+1,0,-1};
        
        while(!Q.empty()){
            int n = Q.front().first.first;
            int m = Q.front().first.second;
            int step = Q.front().second;
            distance[n][m] = step;
            Q.pop();
            for(int i=0;i<4;++i){
                int nrow = n+delrow[i];
                int ncol = m+delcol[i];
                if(nrow>=0 and nrow<row and ncol>=0 and ncol<col and visited[nrow][ncol]==0){
                    Q.push({{nrow,ncol},step+1});
                    visited[nrow][ncol]=1;
                }
            }
        }
        
        return distance;
    }
};