class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int sum=0;
        for(auto &x: nums){
            sum+=x;
            int mod=((sum%k)+k)%k;
            mp[mod]++;
        }
        int ans=0;
        for(auto &y: mp){
            if(y.second>1){
                int n=y.second;
                ans+=(n*(n-1))/2;
            }
        }
        return ans;
    }
};