class Solution {
public:
    int missingInteger(vector<int>& nums) {
       int n=nums.size();
        
        if(n==1)return nums[0]+1;
        
        int sum=nums[0];
        for(int i=1;i<nums.size();++i){
            if((nums[i-1]+1)==nums[i]){
                sum+=nums[i];
               
            }
            
          else{
              break;
          }
            
        }
    
        int ans;
        for(int i=0;i<n+2;++i){
            
            if(find(nums.begin(), nums.end(), sum) == nums.end()){
                ans= sum;
                break;
            }
            
            ++sum;
        }
        
        return ans;

    }
};