class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
      int n=nums.size();
      int sum=n*(n+1)/2;
      
      int cur_sum=0,ok=0;
      for(int i=0;i<n;++i){
        cur_sum+=nums[i];
        if(nums[i]==0)ok=1;
      }
      
      if(sum==cur_sum && ok==0) return 0;
      else if(sum==cur_sum && ok==1) return n+1;
      else return sum-cur_sum;
    }
};