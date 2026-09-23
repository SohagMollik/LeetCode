class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum=0;
        for(auto it: nums){
            totalSum+=it;
        }
        int right=0; int sum=0; int maxlen=-1; int target=totalSum-x;
        if(target<0)return -1;
        else if(target==0)return nums.size();
        else{
            for(int left=0;left<nums.size();left++){
                sum+=nums[left];
                while(sum>target && right<=left){
                    sum-=nums[right];
                    right++;
                }

                if(sum==target){
                    maxlen=max(maxlen, left-right+1);
                }
            }

            return (maxlen>0)?nums.size()-maxlen:-1;
        }
    }
};