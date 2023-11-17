class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int low=0, high=nums.size()-1;
        
        int mx=0;
        while(low < high){
            mx=max(mx, nums[low] + nums[high]);
            low++;
            high--;
        }
        
        return mx;
    }
};