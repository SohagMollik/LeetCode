class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int mx=0,one;
        int ans;
        for(int i=0;i<row;++i){
            one=0;
            for(int j=0;j<col;++j){
                if(mat[i][j]==1){
                    one++;
                }
            }
            int x=max(mx,one);
            if(x>mx){
                mx=x;
                ans=i;
            }
        }
        return {ans, mx};
    }
};