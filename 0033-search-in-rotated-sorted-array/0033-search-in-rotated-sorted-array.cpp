class Solution {
public:
    int search(vector<int>& nums, int target) {
    
        int low=0,high=nums.size()-1,mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){
                if(target>nums[mid] or target<=nums[high])low=mid+1;
                else high=mid;
            }
            else {
                if(target>nums[mid] and target<=nums[high])low=mid+1;
                else high=mid;
            }
        }
        
        if(low==high and nums[low]!=target)return -1;
        else return low;
    }
};