class Solution {
public:
    int solve(int i,vector<int>& nums,vector<int>& dp){
        if(i==0)return nums[i];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int pic=nums[i] + solve(i-2,nums,dp);
        int not_pic=solve(i-1,nums,dp);
        
        return dp[i]=max(pic,not_pic);
    }
    int rob(vector<int>& nums) {
       
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(n-1,nums,dp);
    }
};