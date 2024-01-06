class Solution {
public:
    
    int solve(int idx,int n,vector<int>& startTime, vector<int>& endTime, vector<int>& profit,vector<int>&dp)
    {
        
      if(idx>=n) {
          return 0;
      } 
        if(dp[idx] !=-1)return dp[idx];
        
        int nextItem = lower_bound(startTime.begin(), startTime.end(), endTime[idx] ) - startTime.begin();
        
        int take = profit[idx] + solve(nextItem,n,startTime,endTime,profit,dp);
        int notTake = solve(idx+1,n,startTime,endTime,profit,dp);
        
        
    return dp[idx]=max(take,notTake);
        
    }
    
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int n=startTime.size();
        vector<pair<pair<int,int>,int>>p;
        
        for(int i=0;i<n;++i){
            p.push_back({{startTime[i],endTime[i]},profit[i]});
        }
        
        sort(p.begin(),p.end(), [](const auto &a, const auto &b){
            return a.first.first < b.first.first;
        });
        
        for(int i=0;i<n;++i){
           startTime[i]=p[i].first.first;
           endTime[i]=p[i].first.second;
           profit[i]=p[i].second; 
        }
        
        vector<int>dp(n,-1);
  
        return solve(0,n,startTime,endTime,profit,dp);
    }
};