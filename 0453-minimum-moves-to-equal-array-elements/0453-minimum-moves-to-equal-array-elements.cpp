class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int res=0;
       int mid = nums[0];
       for(int i=0; i<nums.size(); i++){
        res+=abs(mid-nums[i]);
       }

       return res; 
    }
};