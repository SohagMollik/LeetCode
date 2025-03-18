class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
      int ans=0, left=0, usedBit=0; 

      for(int right=0; right<nums.size(); ++right){

        while(usedBit & nums[right]!=0){
            usedBit^=nums[left];
            left++;
        }

        usedBit|=nums[right];
        ans=max(ans,right-left+1);
      } 

      return ans;
    }
};