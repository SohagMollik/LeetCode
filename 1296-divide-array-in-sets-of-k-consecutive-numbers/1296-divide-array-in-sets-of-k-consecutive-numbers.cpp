class Solution {
public:
    
    bool solve(vector<int>& nums, int k, int i, int n)
    {
        int next=nums[i]+1;
        nums[i]=-1;
        ++i;
        int count=1;
        
        while(i<n && count<k){
            
            if(nums[i]==next){
                next=nums[i]+1;
                nums[i]=-1;
                ++count;
            }
            
            ++i;
        }
        
        return count==k;
    }
    
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        if(n%k!=0)return false;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;++i){
            
            if(nums[i]>0){
                if(!solve(nums, k, i, n)) return false;
            }
        }
        
        return true;
    }
};