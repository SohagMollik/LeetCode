class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        
        int n = nums.size();
        int last = nums[n-1];
        long long int cur,ans=0;
        
        for(int i = n-2; i>=0; --i){
            if(nums[i]>last){
                cur = nums[i] / last;
                if(nums[i] % last !=0)cur++;
                last=nums[i] / cur;
                ans+=(cur-1);
            }
            else{
                last = nums[i]; 
            }
        }
        
        return ans;
    }
};