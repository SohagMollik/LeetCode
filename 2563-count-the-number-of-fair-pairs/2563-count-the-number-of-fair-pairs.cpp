class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        int result=0;
        for(int i=0;i<nums.size()-1;i++){

            int left = lower_bound(nums.begin()+i+1, nums.end(), lower-nums[i]) - nums.begin();
            int right = upper_bound(nums.begin()+i+1, nums.end(), upper-nums[i]) - nums.begin();
            result+=(right-left);
        }

        return result;
    }
};