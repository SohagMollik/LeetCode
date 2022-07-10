class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mn=0;
        for(int i=1;i<=nums.size()-1;i+=2){
            mn+=min(nums[i-1],nums[i]);  
        }
        return mn;
    }
};