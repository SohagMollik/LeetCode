class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
     
     int ok=-1;
       for(int i=0;i<nums.size();i++){
        int mx=nums[0], mn=nums[i];
        for(int j=0;j<=i;j++){
            if(nums[j]>mx)mx=nums[j];
        }

        for(int p=i;p<nums.size();p++){
            if(mn>nums[p])mn=nums[p];
        }

        if(mx-mn<=k){
            ok=i;
            break;
        }
       }

       return ok; 
    }
};