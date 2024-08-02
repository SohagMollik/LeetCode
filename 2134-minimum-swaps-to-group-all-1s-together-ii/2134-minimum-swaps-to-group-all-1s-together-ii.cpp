class Solution {
public:
    int minSwaps(vector<int>& nums) {
       
        int n=nums.size(), total_ones=0, curr_one=0;
        
        for(auto num: nums){
            total_ones+=num;
        }
        
        for(int i=0; i<total_ones; ++i){
           curr_one+=nums[i]; 
        }
        
        int max_one=curr_one;
        
        for(int i=0;i<n;++i){
            curr_one-=nums[i];
            curr_one+=nums[(i+total_ones)%n];
            max_one = max(max_one, curr_one);
        }
        
        return total_ones - max_one;
    }
};