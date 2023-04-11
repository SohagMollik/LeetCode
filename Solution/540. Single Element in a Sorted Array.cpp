class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        else{
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if( mid!=0 and (nums[mid]!=nums[mid+1]) and (nums[mid]!=nums[mid-1])){
                return nums[mid];
            }
            else if(mid==0 and (nums[mid]!=nums[mid+1])){
                return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid]==nums[mid+1]) low=mid+1;
                else high=mid-1;
            }
            else{
                if(nums[mid]==nums[mid-1]) low=mid+1;
                else high=mid-1;
            }
        }
         return nums[mid];
        }
    }
};
