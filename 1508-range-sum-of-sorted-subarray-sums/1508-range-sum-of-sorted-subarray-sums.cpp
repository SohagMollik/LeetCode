class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int>sum;
        
        sum.push_back(nums[n-1]);
        
        for(int i=0; i<n-1; ++i){
            int res=0;
           for(int j=i; j<n; ++j){
               res += nums[j];
               sum.push_back(res);
           } 
        }
        
        sort(sum.begin(), sum.end());
        
        long long int ans=0;
        
        for(int i=left-1; i<right; ++i){
            ans+=(long long int)sum[i];
        }
        
        return (ans % 1000000007);
    }
};