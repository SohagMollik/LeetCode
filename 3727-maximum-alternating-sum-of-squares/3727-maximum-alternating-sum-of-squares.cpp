class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<0)nums[i]*=(-1);
        }

        sort(nums.begin(), nums.end());

        long int sum=0; int low=0, high=n-1;
        while(low<n/2){
            sum+=(nums[high]*nums[high] - nums[low]*nums[low]);
            low++;
            high--;
        }

        if(n%2!=0)sum+=(nums[n/2]*nums[n/2]);

        return sum;
    }
};