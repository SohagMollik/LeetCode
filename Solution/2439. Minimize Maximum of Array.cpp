class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long int sum=0;
        int ans=0;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            int cursum=(sum+i)/(i+1);
            ans=max(cursum,ans);
        }
        return ans;
    }
};
