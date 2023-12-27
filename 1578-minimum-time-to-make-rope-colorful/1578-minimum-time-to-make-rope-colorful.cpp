class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int sum=neededTime[0], mx=neededTime[0], ans=0;
        for(int i=0;i<colors.size();++i){
            if(i>0 and colors[i]==colors[i-1]){
                sum+=neededTime[i];
                mx=max(mx,neededTime[i]);
            }
            
           else if(i>0 and colors[i]!=colors[i-1]){
            ans+=(sum-mx);
            sum=neededTime[i];
            mx=neededTime[i];
            }
        }
        
        ans+=(sum-mx);
        
        return ans;
    }
};