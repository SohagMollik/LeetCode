class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int n=nums.size();
       int sum=nums[0],mx=0;
       for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                mx=max(sum,mx);
                sum=0;
            }
            sum+=nums[i];
        }

       return max(mx,sum);
 
    }
};