class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
      vector<int>v,vec;
      
      v.push_back(nums[0]);
      vec.push_back(nums[1]);
      
      for(int i=2;i<nums.size();++i){
        int x=v.back();
        int y=vec.back();
        if(x>y)v.push_back(nums[i]);
        else vec.push_back(nums[i]);
      }
      
      nums.clear();
      nums=v;
      nums.insert(nums.end(), vec.begin(), vec.end());
      
      return nums;
    }
};