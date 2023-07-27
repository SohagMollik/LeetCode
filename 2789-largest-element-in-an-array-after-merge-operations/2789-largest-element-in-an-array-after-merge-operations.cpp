class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int sz=nums.size();
        
        long long sum=0;
        for(int i=sz-1;i>=0;--i)
        {
            if(sum>=nums[i])sum+=(long long)nums[i];
            else sum=nums[i];
        }
           
        
        return sum;
        
    }
};