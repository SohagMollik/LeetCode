class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[nums.size()-1]<target)return nums.size();
        else{
        int ans,ans1;
        bool ok=false;
        for(int i=0;i<nums.size();++i){
          if(nums[i]==target){
              ans=i;
              ok=true;
              break;
          }  
        }
        for(int i=0;i<nums.size();i++){
            if(ok==false && nums[i]>target){
                ans1=i;
                break;
            }
        }
            if(ok==false)
            return ans1;
            else return ans;
        }
    }
};