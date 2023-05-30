class Solution {
public:
    int minMoves(vector<int>& nums) {
       int mini= *min_element(nums.begin(),nums.end());
       int c=0;
       for(auto &x: nums)c+=abs(x-mini);
      
        return c;

    }
};