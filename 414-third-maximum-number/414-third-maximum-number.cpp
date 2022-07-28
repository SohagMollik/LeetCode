class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>s;
        for(int i=0;i<nums.size();++i){
            s.insert(nums[i]);
        }
        vector<int>v(s.begin(),s.end());
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()==2 || v.size()==1) return v[0];
        else return v[2];
    }
};