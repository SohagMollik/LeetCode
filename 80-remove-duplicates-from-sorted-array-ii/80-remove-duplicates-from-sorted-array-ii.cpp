class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1] && count<2){
                count++;
                i++;
            }
            else if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
            }
            else if(nums[i]!=nums[i-1]){
                count=1;
                i++;
            }
        }
        return nums.size();
    }
};