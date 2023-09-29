class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int ok=0, ans=0;
        int n=nums.size();
        for(int i=1;i<n;++i){
            if(nums[i-1]<=nums[i])ok++;
        }
        
        for(int i=1;i<n;++i){
            if(nums[i-1]>=nums[i])ans++;
        }
        
        if((ok==(n-1)) or (ans==(n-1))) return 1;
        else return 0;
    }
};