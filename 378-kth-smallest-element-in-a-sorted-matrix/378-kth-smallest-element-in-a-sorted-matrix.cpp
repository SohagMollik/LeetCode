class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int>v;
        int row=mat.size();
        int col=mat[0].size();
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};