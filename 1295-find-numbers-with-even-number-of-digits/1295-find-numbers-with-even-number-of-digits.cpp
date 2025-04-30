class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0,len;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            len = s.size();
            if(len%2==0)ans++;
        }

        return ans;
    }
};