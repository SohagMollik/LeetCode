class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        vector<vector<int>>ans;
        for(auto x: nums1){
            mp[x[0]]+=x[1];
        }
        for(auto x: nums2){
            mp[x[0]]+=x[1];
        }
        
        for(auto y: mp){
            ans.push_back({y.first,y.second});
        }
        return ans;
    }
};
