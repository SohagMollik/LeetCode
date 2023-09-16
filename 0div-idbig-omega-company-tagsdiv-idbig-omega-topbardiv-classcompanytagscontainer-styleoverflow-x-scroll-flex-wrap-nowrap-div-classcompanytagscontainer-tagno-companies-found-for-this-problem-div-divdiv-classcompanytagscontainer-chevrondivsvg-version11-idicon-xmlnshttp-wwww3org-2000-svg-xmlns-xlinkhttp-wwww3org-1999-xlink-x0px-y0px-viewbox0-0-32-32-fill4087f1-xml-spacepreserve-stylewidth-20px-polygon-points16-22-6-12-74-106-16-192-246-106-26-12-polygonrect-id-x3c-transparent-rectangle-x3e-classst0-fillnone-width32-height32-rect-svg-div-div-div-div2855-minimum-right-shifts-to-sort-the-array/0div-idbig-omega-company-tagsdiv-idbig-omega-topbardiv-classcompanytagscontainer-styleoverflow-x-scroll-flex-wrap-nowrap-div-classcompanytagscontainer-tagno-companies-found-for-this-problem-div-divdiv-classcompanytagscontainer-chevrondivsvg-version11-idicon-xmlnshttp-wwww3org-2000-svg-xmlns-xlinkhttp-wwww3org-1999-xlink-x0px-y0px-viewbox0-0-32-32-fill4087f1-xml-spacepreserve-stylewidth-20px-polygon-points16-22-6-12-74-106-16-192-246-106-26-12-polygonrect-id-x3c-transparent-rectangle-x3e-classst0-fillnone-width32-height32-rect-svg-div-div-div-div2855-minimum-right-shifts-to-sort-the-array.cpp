class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int x,k;
        int n = nums.size();
        vector<int>v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        int c=0;
        
        for(int i=0;i<n;++i){
            if(nums[i]==v[i]) c++;
        }
        
        if(c!=n){
        
        
        int mid = -1;
        
        for(int i=1;i<n;++i){
            if(nums[i-1]>nums[i])
            {
                mid = i;
                break;
            }
        }
        
         x=mid;
        
         k=1;
        
        if((mid != n-1) || (mid!=-1)){
            
        for(int i=mid+1;i<n;++i){
            if(nums[i-1]<nums[i])k++;
            
         }
            
        }
            
        }
        
        if(x==-1)return 0;
        
       else if(n==1)return 0;
        
       else if(c==n)
        {
            return 0;
        }
        
        else if(n==2){
            if(nums[0]<nums[1])return 0;
            else return 1;
        }
        
        else if(nums[0] < nums[n-1] || k!=(n-x))
        {
            return -1;
        }
        
        else
        {
            return n-x;
        }
        
    }
};