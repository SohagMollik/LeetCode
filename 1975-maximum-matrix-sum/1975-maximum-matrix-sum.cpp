class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        int row=matrix.size();
        int col=matrix[0].size();

        int sum=0, negCount=0, minValue=INT_MAX;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]<0)negCount++;
                minValue = min(minValue, abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);

            }
        }

        

        return (negCount%2==0)? sum: sum-(2*minValue);

    }
};