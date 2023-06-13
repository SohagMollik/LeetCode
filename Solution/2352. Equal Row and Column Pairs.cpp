class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        int c=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                c=0;
                for(int k=0;k<n;++k){
                    if(grid[i][k]==grid[k][j])c++;
                }
                if(c==n)ans++;
            }
        }
        return ans;
    }
};