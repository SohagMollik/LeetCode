class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v(0);
        for(int i=0;i<nums.size();++i){
            int sq=nums[i]*nums[i];
            v.push_back(sq);
        }
        sort(v.begin(),v.end());
        return v;
    }
};