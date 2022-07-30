class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto &x: mp){
            if(x.second==1)nums.push_back(x.first);
        }
        return nums;
    }
};