class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while(k--){
            
            int index = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[index]=nums[index]*multiplier;

        }
        
        return nums;
    }
};