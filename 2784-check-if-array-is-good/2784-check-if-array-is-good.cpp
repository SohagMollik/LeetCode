class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==1)return false;
        else if(nums.size()==2){
            if(nums[0]==1 && nums[1]==1)return true;
            else return false;
        }
        else{
            sort(nums.begin(),nums.end());
            set<int>st(nums.begin(),nums.end());
            int sz=nums.size();
            int ok=0;
            for(int i=0;i<nums.size()-2;++i){
                if(nums[i]!=(i+1)){
                    ok=1;
                    break;
                }
            }
            
            if(ok==0 && st.size()==(sz-1) && nums[sz-1]==nums[sz-2])return true;
            else return false;
            
            
        }
    }
};