class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        bool firstRow = false, firstCol = false;

        //first row check
        for (int j = 0; j < col; j++) {
            if (matrix[0][j] == 0) firstRow = true;
        }

        //first column check
        for (int i = 0; i < row; i++) {
            if (matrix[i][0] == 0) firstCol = true;
        }

        // Mark zeroes in first row and column
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set elements to 0 based on markers
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Update first row if needed
        if (firstRow) {
            for (int j = 0; j < col; j++) {
                matrix[0][j] = 0;
            }
        }

        // Update first column if needed
        if (firstCol) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
