class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();++i){
            if(count(nums.begin(),nums.end(),nums[i])==1)v.push_back(nums[i]);
        }
        return v;
    }
};