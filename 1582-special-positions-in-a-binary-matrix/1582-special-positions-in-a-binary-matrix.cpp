class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int m=mat.size();
        int n=mat[0].size();
        
        vector<int>row_sum(m), col_sum(n);
        
        for(int i=0;i<m;++i){
            row_sum[i]=0;
            for(int j=0;j<n;++j){
                row_sum[i]+=mat[i][j];
            }
        }
        
         for(int i=0;i<n;++i){
            col_sum[i]=0;
            for(int j=0;j<m;++j){
                col_sum[i]+=mat[j][i];
            }
        }
        
        int count=0;
         for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(row_sum[i]==1 && col_sum[j]==1 && mat[i][j]==1)++count;
            }
        }
        
        return count;
    }
};