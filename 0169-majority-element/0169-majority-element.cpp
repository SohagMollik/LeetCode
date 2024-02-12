class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int m=nums.size()/2;
        
        map<int,int>mp;
        for(auto pic: nums){
          mp[pic]++;
        }
      
      int ans;
      for(auto pic: mp){
       if(pic.second>m)ans=pic.first;
      }
  
  return ans;
    }
};