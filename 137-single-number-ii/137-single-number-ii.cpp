class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        int ans;
        for(auto &x: mp){
            if(x.second!=3)ans=x.first;
        }
        return ans;
    }
};