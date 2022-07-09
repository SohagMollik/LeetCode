class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();++i){
            if(mn>=nums[i])mn=nums[i];
            if(mx<=nums[i])mx=nums[i];
        }
        return __gcd(mn,mx);
    }
};