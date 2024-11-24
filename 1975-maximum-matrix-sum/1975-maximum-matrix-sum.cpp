class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        long int sum=0;
        int minValue = INT_MAX, negCount=0;
        
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                
                sum+=abs(matrix[i][j]);
                
                minValue = min(minValue, abs(matrix[i][j]));
                
                if(matrix[i][j]<0) ++negCount;
                
            }
        }
        
        
        if(negCount%2==0) return sum;
        else return sum-(2*minValue);
        
    }
};