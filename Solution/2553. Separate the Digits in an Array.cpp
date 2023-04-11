class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string st="";
        for(int i=0;i<nums.size();++i){
            st+=to_string(nums[i]);
        }
        vector<int>ans;
        for(int i=0;i<st.size();++i){
            int x = (st[i]-'0');
           ans.push_back(x); 
        }
        return ans;
    }
};
