class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
      if(n==1)return 1;
      else {
      int ans=0;
      int y=nums[0] + nums[1];
      for(int i=0;i<n-1;i+=2){
       int x=nums[i] + nums[i+1];
        if(y==x){
        ans++;
          y=x;
        }
        else break;
      }
      
      
      return ans;
      }
    }
};