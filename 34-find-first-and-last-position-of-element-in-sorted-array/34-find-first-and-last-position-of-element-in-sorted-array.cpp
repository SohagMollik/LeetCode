class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(0);
        for(int i=0;i<nums.size();++i){
            if(target==nums[i])v.push_back(i);
        
     }
        if(nums.size()==0)return {-1,-1};
        else if(v.size()==0)return {-1,-1};
        else return {v[0],v[v.size()-1]};
        
    }
};