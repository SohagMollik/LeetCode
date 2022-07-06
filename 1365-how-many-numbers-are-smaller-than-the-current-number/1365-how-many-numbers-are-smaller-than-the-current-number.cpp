class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>b;
        for(int i=0;i<nums.size();++i){
            int c=0;
            for(int j=0;j<nums.size();++j){
                if(nums[i]>nums[j])c++;
            }
            b.push_back(c);
        }
        return b;
    }
};