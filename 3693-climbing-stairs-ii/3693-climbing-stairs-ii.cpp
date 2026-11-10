class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<long long>dp(n+1, LLONG_MAX);
        dp[0]=0;
        for(int j=1;j<=n;j++){
            for(int k=1;k<=3;k++){
                int i=j-k;
                if(i>=0)
                dp[j]=min(dp[j], dp[i] + costs[j-1] + (i-j)*(i-j));
            }
        }

        return (int)dp[n];
    }
};