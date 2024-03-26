
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        vector<bool>present(n+1,false);
        
        for(int i=0;i<nums.size();++i){
            if(nums[i]>0 and nums[i]<=n){
                present[nums[i]]=true;
            }
        }
        
        for(int i=1;i<=n;++i){
            if(!present[i])return i;
        }
        
        return n+1;
    }
};