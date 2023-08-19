class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0;
        for( int i = 0; i < nums.size(); ++i ){
            for(int j = 0; j < nums.size(); ++j ){
                if( j>i && (nums[i] + nums[j] < target) )ans++;
            }
        }
        
        return ans;
    }
};