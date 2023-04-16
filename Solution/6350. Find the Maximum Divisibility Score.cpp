class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        sort(nums.begin(),nums.end());
        sort(divisors.begin(),divisors.end());
      int c;
        int mx=INT_MIN;
        int ans=INT_MAX;
        for(int i=0;i<divisors.size();++i){
            c=0;
            for(int j=0;j<nums.size();++j){
                if(nums[j]%divisors[i]==0)c++;
            }
         int x=max(mx,c);
         if(x>mx){
            mx=x;
            ans=divisors[i];
         }
        }

        return ans;
    }
};