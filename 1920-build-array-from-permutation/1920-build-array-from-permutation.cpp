class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>v(0);
        for(int i=0;i<nums.size();++i){
            v.push_back(nums[nums[i]]);
        }
        return v;
    }
};