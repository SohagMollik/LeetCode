class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

      int mx=-1;
      
      for(int i=0;i<nums.size();i++){
        for(int j=i+1; j<nums.size(); j++){
            for(int k=j+1; k<nums.size();k++){
               mx=max(((nums[i]-nums[j])*nums[k]),mx);
            }
        }
      }

      if(mx<0)return 0;
      else return mx;
    }
};