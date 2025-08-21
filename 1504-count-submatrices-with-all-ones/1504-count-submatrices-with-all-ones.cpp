class Solution {
    int solve(vector<vector<int>>& mat, int x, int y){
        int row =mat.size();
        int col =mat[0].size();
        int boundary = col, count=0;

        for(int i=x;i<row;i++){
            for(int j=y; j<boundary; j++){
                if(mat[i][j]==1)count++;
                else boundary=j;
            }
        }

        return count;

    }

public:
    int numSubmat(vector<vector<int>>& mat) {
        int row =mat.size();
        int col =mat[0].size();
        int count = 0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                count+=solve(mat, i, j);
            }
        }

        return count;
    }
};