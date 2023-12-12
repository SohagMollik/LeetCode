class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
       int a=0,b=0,ok;
        
        for(int i=0;i<nums.size();++i){
            if(nums[i]>a){
                a=nums[i]; 
                ok=i;
            }
        }
        
          for(int i=0;i<nums.size();++i){
            if(nums[i] != a or i != ok){
                if(b==0)b=nums[i];
                else if(nums[i]>b)b=nums[i];
            }
        }
        
        return (a-1)*(b-1);
    }
};
