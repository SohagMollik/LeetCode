class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
      int x=0;
      for(int i=0;i<nums.size();i++){
        x^=nums[i];
      }

      if(x>0)return nums.size();
      else 
      {
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
             return nums.size()-1;
        }
    }

    return 0;
    }
};