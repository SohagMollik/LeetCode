class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int r0,r1;
        int row_Zero[n],row_One[n];
        for(int i=0;i<n;++i){
            r0=0,r1=0;
            for(int j=0;j<m;++j){
                if(grid[i][j]==0)r0++;
                else r1++;
            }
            row_Zero[i]=r0;
            row_One[i]=r1;
        }
        int c0,c1;
        int col_Zero[m],col_One[m];
        for(int i=0;i<m;++i){
            c0=0,c1=0;
            for(int j=0;j<n;++j){
                if(grid[j][i]==0)c0++;
                else c1++;
            }
            col_Zero[i]=c0;
            col_One[i]=c1;
        }
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        //vector<int>v;
        for(int i=0;i<n;++i){
            //int c;
            for(int j=0;j<m;++j){
               ans[i][j]=row_One[i]+col_One[j]-row_Zero[i]-col_Zero[j]; 
               //v.push_back(c);
               //ans.push_back(c);
               //c=0;
              // v.clear();
            }
        }
        return ans;
    }
};