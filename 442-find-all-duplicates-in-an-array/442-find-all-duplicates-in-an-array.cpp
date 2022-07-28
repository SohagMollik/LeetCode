class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto &x: mp){
            if(x.second==2)ans.push_back(x.first);
        }
        return ans;
    }
};