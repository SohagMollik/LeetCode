class Solution {
public:
    string triangleType(vector<int>& nums) {

       if(nums[0]==nums[1] && nums[1]==nums[2])return "equilateral";
       else if(nums[0]==nums[1] or nums[1]==nums[2] or nums[0]==nums[2]) return "isosceles";
       else if(nums[0]+nums[1]<=nums[2] or nums[1]+nums[2]<=nums[0] or nums[0]+nums[2]<=nums[1])return "none";
       else return "scalene";
    }
};
