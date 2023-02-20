class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[nums.size()-1]<target)return nums.size();
        else{
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
             mid=low+(high-low)/2;
            if(nums[mid]==target){
               return mid;
            }
            if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
           if(nums[mid]<target){
               mid++;
           }
            return mid;
             
            
        }
        
    }
};