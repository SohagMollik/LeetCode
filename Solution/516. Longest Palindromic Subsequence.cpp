class Solution {
public:
    int LPS(string &s, vector<vector<int>>&dp,int start,int end){
        if(start==end)return 1;
        if(start>end)return 0;
        if(dp[start][end]!=-1)return dp[start][end];
        if(s[start]==s[end])return (2+ LPS(s,dp,start+1,end-1));
        int leftside=LPS(s,dp,start+1,end);
        int rightside=LPS(s,dp,start,end-1);
        return dp[start][end]= max(leftside,rightside);
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=LPS(s,dp,0,n-1);
        return ans;
    }
};