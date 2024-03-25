class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        map<int,int>mp;
        for(auto num: nums){
            mp[num]++;
        }
        
        nums.clear();
        for(auto it: mp){
            if(it.second==2)nums.push_back(it.first);
        }
        
        return nums;
    }
};