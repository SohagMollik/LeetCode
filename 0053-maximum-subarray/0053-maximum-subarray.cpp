class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0, ans = INT_MIN;
        for(auto c : nums){
            cur = max(c, cur+ c),
           ans = max(ans, cur);
        }
        return ans; 
    }
};