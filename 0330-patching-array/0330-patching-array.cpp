class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
        int sz = nums.size(), i=0, count=0;
        long long int curMax=0;
        
        while(curMax < n){
            
            if(i<sz && nums[i]<=curMax+1){
                curMax+=nums[i++];
            }
            
            else{
                curMax+=curMax+1;
                count++;
            }
        }
        
        return count;
    }
};