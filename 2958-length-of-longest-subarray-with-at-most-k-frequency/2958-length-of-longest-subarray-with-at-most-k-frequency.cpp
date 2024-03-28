class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int n=nums.size();
        int start,end,mx=0;
        
        map<int,int>mp;
        
        for(start=0,end=0; end<n; ++end){
            
            mp[nums[end]]++;
            if(mp[nums[end]]>k){
                
                while(nums[start]!=nums[end]){
                    mp[nums[start]]--;
                    start++;
                }
                
                mp[nums[start]]--;
                start++;
                    
                }
              mx=max(mx,(end-start)+1);
            }
            
        
        return mx;
    }
};