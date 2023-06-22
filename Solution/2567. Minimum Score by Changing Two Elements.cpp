class Solution {
public:
    int minimizeSum(vector<int>& nums) {
     int sz=nums.size();  
     sort(nums.begin(),nums.end());
     if(sz==3)return 0;
     int x=nums[sz-3]-nums[0];
     int y=nums[sz-2]-nums[1];
     int z=nums[sz-1]-nums[2];
     return min({x,y,z});
    }
};