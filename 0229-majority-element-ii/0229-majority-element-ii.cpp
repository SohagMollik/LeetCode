class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int appear = floor(nums.size()/3);
        map<int,int>mp;
        for(auto x: nums){
            mp[x]++;
        }
        
        nums.clear();
        for(auto i: mp){
            if(i.second>appear)nums.push_back(i.first);
        }
        
        return nums;
    }
};