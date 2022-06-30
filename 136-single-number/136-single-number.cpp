class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();++i){
            int x=nums[i];
            mp[x]++;
        }
        int ans;
        for(auto z: mp){
            if(z.second==1){
                ans=z.first;
                break;
            }
        }
        return ans;
    }
};