class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k<=1)return 0;
        
        int n=nums.size();
        int start=0, end=0, c=0;
        long long int p=1;
        
        while(end<n){
            p*=nums[end];
            
            while(start<n && p>=k){
                p/=nums[start];
                start++;
            }
            
            if(p<k){
                c+=(end-start)+1;
                end++;
            }
        }
        
        return c;
    }
};