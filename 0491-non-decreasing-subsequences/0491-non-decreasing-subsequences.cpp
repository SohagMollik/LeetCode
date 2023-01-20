class Solution {
public:
    void func(int idx,vector<int>&nums, vector<int>&temp,set<vector<int>>&ans){
        int n=nums.size();
       if(idx>=n){
           if(temp.size()>=2){
               ans.insert(temp);
           }
           return ;
       }
        if(!temp.size() || nums[idx]>=temp.back()){
            temp.push_back(nums[idx]);
            func(idx+1,nums,temp,ans);
            temp.pop_back();
        }
        func(idx+1,nums,temp,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>ans;
        func(0,nums,temp,ans);
       
        return vector(ans.begin(),ans.end());
    }
};