class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));

        // Copy the first row as the initial values for dp
        for (int i = 0; i < m; ++i) {
            dp[0][i] = matrix[0][i];
        }

        // Start from the second row and update the dp array
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dp[i][j] = matrix[i][j] + min({dp[i - 1][j], (j > 0) ? dp[i - 1][j - 1] : INT_MAX, (j < m - 1) ? dp[i - 1][j + 1] : INT_MAX});
            }
        }

        // Find the minimum value in the last row
        int ans = INT_MAX;
        for (int i = 0; i < m; ++i) {
            ans = min(ans, dp[n - 1][i]);
        }

        return ans;
    }
};
