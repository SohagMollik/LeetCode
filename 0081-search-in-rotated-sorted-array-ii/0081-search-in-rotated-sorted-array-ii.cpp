class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            
            if(nums[mid]==target)return true;
            
            if(nums[mid]==nums[low] and nums[mid]==nums[high]){low++;high--;}
            
            else if(nums[mid]>=nums[low]){
                
            if(target<nums[mid] and target>=nums[low])high=mid-1;
            else low=mid+1;
            }
            
            else{
                if(target>nums[mid] and target<=nums[high])low=mid+1;
                else high=mid-1;
            }
        }
        
        
       return false;
        
       
    }
};