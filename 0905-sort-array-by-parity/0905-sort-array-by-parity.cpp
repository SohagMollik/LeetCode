class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]%2!=0 && nums[i]!=-1){
                nums.push_back(nums[i]);
                nums[i]=-1;
                
            }
        }
        
        for(int i=0;i<nums.size(); ){
            if(nums[i]==-1){
                nums.erase(nums.begin()+i);
                continue;
            }
            
            else{
                ++i;
            }
           
        }
        
        return nums;
    }
};