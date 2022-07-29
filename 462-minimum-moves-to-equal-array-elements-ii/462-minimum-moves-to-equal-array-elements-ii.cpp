class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size()==1)return 0;
        else{
        sort(nums.begin(),nums.end());
         int x=nums[nums.size()/2];
         int ans=0;
        for(int i=0;i<nums.size();++i){
            ans+=abs(x-nums[i]);
        }
        return ans;
        }
    }
};