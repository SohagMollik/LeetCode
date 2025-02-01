class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {

        int ok=0;
        for(int i=0;i<nums.size()-1;++i){
            
                if((nums[i]%2==0 && nums[i+1]%2==0)||(nums[i]%2!=0 && nums[i+1]%2!=0)) {
                   ok=1;
                   break;
                }
        }

      if(ok==1)return false;
      else return true;
    }
};