class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

      vector<int>vec;
      for(int i=0; i<grid.size();i++){
        for(int j=0; j<grid[0].size();j++){
            vec.push_back(grid[i][j]);
        }
      }
      sort(vec.begin(),vec.end());

      int sz=vec.size();
      int res=vec[sz/2]; 
      int ok=0, ans=0;

      for(int i=0;i<vec.size();i++){
        if(abs(res-vec[i]) % x!=0){
            ok=1;
            break;
        }
        else{
            int temp=abs(res-vec[i]);
            ans+=(temp/x);
        }
      }

      if(ok==1)return -1;
      else return ans; 
    }
};