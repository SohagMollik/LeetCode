class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0,d=0;
        for(int i=1;i<nums.size();++i){
            if(nums[i-1]<=nums[i]){
                c++;
            }
        }
         for(int i=1;i<nums.size();++i){
            if(nums[i-1]>=nums[i]){
                d++;
            }
        }
        if(c==nums.size()-1 || d==nums.size()-1)return 1;
        else return 0;
    }
};