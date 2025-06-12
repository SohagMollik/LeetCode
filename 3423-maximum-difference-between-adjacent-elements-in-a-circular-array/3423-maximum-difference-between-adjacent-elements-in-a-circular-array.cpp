class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int result=INT_MIN;

        for(int i=1; i<nums.size(); i++){
            result = max(result, nums[i]-nums[i-1]);
        }
        result =max(result, nums[nums.size()-1] - nums[0]);

        return result;
    }
};