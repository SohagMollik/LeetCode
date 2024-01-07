class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n=nums.size();
        vector<unordered_map<int,int>>dp(n+2);
        
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<i;++j){
                
                long diff=(long)nums[i]-(long)nums[j];
                if(diff>INT_MAX or diff<INT_MIN)continue;
                else{
                dp[i][diff]++;
                if(dp[j].find(diff) != dp[j].end()){
                    dp[i][diff]+=dp[j][diff];
                    ans+=dp[j][diff];
                }
                }
            }
        }
        
        return ans;
    }
};