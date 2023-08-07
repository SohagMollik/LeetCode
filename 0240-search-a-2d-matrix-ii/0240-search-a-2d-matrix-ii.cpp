class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        for(int i=0;i<row;++i){
            if( find(matrix[i].begin(),matrix[i].end(),target) != matrix[i].end()){
                return 1;
            }
        }
        
        return 0;
    }
};