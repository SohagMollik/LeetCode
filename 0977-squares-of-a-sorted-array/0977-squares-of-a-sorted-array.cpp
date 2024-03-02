class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
      priority_queue<int> p;
      for(int i=0;i<nums.size();++i){
        int x=nums[i]*nums[i];
        p.push(x);
      }
      
      nums.clear();
      
      while(!p.empty()){
        int y=p.top();
        nums.insert(nums.begin(),y);
        p.pop();
      }
      
      return nums;
      
    }
};