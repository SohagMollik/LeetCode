class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>v(0);
        for(int i=0;i<nums.size();++i){
            int idx=index[i];
            v.insert(v.begin()+idx,nums[i]);
        }
        return v;    
    }
};