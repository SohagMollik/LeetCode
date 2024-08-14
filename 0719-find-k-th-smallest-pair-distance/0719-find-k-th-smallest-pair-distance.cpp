class Solution {
public:
    
    bool solve(vector<int>& nums, int k, int mid){
      
        int count=0, left=0;
        
        for(int right=1; right<nums.size(); ++right){
            
            while(nums[right]-nums[left]>mid)left++;
            count+=(right-left);
        }
        
        return (count>=k);
    }
    
    int smallestDistancePair(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int left=0, right=nums[nums.size()-1];
        
        while(left<right){
            int mid = left + (right-left)/2;
            
            if(solve(nums, k, mid))right=mid;
            else left=mid+1;
            
        }
        
        return left;
        
       
    }
};