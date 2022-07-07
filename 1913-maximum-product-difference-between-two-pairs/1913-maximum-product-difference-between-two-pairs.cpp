class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,c,d;
        a=nums[0];
        b=nums[1];
        c=nums[nums.size()-1];
        d=nums[nums.size()-2];
        return (c*d)-(a*b);
    }
};