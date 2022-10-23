class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        set<int>s;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;    
            s.insert(nums[i]);
        }
        for(auto &y: mp){
            if(y.second==2)v.push_back(y.first);
        }
        int sum=(nums.size()*(nums.size()+1))/2;
        int result=0;
        for(auto &x: s){
            result+=x;
        }
        v.push_back(sum-result);
        return v;

    }
};