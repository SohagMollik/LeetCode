class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        int mx=0,ans;
        for(auto x: mp){
            int y=x.second;
            if(y>=mx){
                mx=y;
                ans=x.first;
            }
        }
        return ans;
    }
};