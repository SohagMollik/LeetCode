class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        long long n=nums.size();
         long long start=0, end=0, c=0, mx=*max_element(nums.begin(),nums.end()), ans=0;
        
        
        for(end=0; end<n; ++end){
            
            if(nums[end]==mx)++c;
            
            while(c>=k){
                if(nums[start]==mx) 
                --c;
                ++start;
                ans+=(n-end);
            }
            
        }
        
        return ans;
    }
};