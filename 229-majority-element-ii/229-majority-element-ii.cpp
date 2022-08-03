class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c=floor(nums.size()/3);
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
        }
        for(auto &x: mp){
            if(x.second>c)ans.push_back(x.first);
        }
        return ans;
    }
};