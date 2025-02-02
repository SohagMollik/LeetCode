class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        int res=0;
        if(nums[0]<nums[n-1])res++;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) res++;
            
        }


        if(res<=1)return true;
        
        else return false;
    }
};