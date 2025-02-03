class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n=nums.size();
        int c=1, mx1=INT_MIN, d=1, mx2=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i])
            {
                c++;
            }
            else {
                mx1=max(mx1,c);
                c=1;
            }

        }
        mx1=max(mx1,c);

         for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i])
            {
                d++;
            }
            else {
                mx2=max(mx2,d);
                d=1;
            }

        }
        mx2=max(mx2,d);

        return max(mx1, mx2);

    }
};