class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool ans=false;
        for(int i=1;i<=nums.size()-1;++i){
            if(nums[i]==nums[i-1]){
                ans=true;
                break;
            }
        }
        if(ans==true)return 1;
        else return 0;
    }
};