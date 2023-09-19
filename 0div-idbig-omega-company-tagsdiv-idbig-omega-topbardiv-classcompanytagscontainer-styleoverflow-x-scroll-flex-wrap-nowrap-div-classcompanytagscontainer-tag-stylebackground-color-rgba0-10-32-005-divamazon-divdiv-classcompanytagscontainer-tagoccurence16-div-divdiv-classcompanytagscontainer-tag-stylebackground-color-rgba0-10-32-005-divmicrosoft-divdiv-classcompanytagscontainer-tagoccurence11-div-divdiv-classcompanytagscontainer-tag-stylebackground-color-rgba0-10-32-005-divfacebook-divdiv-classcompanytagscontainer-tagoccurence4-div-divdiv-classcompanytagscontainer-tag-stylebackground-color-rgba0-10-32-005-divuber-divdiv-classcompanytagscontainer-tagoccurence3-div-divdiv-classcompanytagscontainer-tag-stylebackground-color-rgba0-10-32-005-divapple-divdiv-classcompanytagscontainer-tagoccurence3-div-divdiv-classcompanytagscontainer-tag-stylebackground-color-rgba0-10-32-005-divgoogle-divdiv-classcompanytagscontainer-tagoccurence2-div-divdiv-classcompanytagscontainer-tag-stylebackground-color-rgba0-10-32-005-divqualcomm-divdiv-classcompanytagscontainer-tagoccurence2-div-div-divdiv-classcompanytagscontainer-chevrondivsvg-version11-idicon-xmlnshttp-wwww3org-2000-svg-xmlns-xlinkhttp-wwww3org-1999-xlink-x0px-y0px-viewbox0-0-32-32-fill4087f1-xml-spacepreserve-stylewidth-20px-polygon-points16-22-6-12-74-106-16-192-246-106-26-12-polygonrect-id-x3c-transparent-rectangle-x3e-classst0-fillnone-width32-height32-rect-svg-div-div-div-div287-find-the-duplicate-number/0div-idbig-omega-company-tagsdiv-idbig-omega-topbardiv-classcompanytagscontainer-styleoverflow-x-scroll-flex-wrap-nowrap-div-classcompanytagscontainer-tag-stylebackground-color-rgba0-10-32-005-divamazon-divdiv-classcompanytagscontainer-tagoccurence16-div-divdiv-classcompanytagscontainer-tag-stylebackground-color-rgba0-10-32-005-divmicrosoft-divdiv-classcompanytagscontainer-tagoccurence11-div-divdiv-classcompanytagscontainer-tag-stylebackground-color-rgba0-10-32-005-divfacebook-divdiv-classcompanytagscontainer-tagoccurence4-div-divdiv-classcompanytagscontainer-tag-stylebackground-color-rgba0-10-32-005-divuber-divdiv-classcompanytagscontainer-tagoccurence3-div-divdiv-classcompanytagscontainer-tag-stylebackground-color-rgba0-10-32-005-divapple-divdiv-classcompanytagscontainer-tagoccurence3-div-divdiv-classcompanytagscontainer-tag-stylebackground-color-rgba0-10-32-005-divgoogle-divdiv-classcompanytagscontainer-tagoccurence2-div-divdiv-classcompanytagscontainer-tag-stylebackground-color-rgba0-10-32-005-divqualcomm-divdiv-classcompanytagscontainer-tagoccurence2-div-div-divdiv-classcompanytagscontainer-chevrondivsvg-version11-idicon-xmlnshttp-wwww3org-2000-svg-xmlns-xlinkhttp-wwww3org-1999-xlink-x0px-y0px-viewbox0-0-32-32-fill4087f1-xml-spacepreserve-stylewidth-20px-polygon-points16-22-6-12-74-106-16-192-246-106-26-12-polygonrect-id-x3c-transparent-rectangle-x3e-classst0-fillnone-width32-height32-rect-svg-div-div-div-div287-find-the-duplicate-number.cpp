class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
        if(nums.size()>1){
        int ans;
        for(int i=0;i<nums.size();++i){
            ans=abs(nums[i]);
            if(nums[ans]<0){
                return ans;
                break;
            }
            nums[ans]=(-1)*nums[ans];
         }
      }
        
        return -1;
    }
};