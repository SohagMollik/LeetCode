class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        
      int n=grid.size();
      int m=grid[0].size();
      vector<vector<int>>prefix(n,vector<int>(m,0));
      
      
      for(int i=0;i<n;++i){
        prefix[i][0]=grid[i][0];
        for(int j=1;j<m;++j){
          prefix[i][j] = prefix[i][j-1] + grid[i][j];
        }
      
      }
      
      vector<int>v;
      for(int i=0;i<m;++i){
        int sum=0;
        for(int j=0;j<n;++j){
          sum+=prefix[j][i];
          v.push_back(sum);
        }
      }
      
      int cnt=0;
      for(int i=0;i<v.size();++i){
        if(v[i]<=k)cnt++;
      }
      
      return cnt;
    }
};