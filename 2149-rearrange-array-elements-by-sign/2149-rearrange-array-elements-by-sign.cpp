class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v,v1;
        int sz=nums.size();
        for(int i=0;i<nums.size();++i){
            if(nums[i]>=1)v.push_back(nums[i]);
            else v1.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<sz/2;++i){
            nums.push_back(v[i]);
            nums.push_back(v1[i]);
        }
        return nums;
    }
};