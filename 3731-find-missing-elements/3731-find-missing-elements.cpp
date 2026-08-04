class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=INT_MIN;

        for(int i=0;i<nums.size();i++){
        mn=min(mn,nums[i]);
        mx=max(mx,nums[i]);
        }

        vector<int>ans;

        for(int i=mn;i<=mx;i++){
            auto it = find(nums.begin(), nums.end(), i);
            if(it==nums.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};