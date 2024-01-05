class Solution {
public:
    
    int func(int n, int idx, int pre_idx,vector<int>& nums, vector<vector<int>>&dp)
    {
        if(idx==n) return 0;
        if(dp[idx][pre_idx + 1] !=-1) return dp[idx][pre_idx + 1];
        
        int len=func(n,idx+1,pre_idx,nums,dp);
        
        if(pre_idx==-1 or nums[idx]>nums[pre_idx]){
            len = max(len, 1 + func(n,idx+1,idx,nums,dp));
        }
        
        return dp[idx][pre_idx+1] =len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<vector<int>>dp(n, vector<int>(n+1, -1));
        
        return func(n,0,-1,nums,dp);
    }
};

