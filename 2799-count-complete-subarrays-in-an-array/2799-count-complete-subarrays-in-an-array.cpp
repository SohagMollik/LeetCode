class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int sz=nums.size();
        int ans=0;
        set<int>s(nums.begin(),nums.end());
        
        set<int>st;
        for(int i=0;i<sz;++i){
            for(int j=i;j<sz;++j){
                st.insert(nums[j]);
                if((st==s) and (j!=(sz-1))){
                    ans++;
                }
                
                if((st==s) and (j==(sz-1))){
                    ans++;
                    st.clear();
                }
            }
        }
        return ans;
    }
};