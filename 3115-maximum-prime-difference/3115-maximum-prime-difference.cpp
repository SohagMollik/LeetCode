class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        
        int n=nums.size();
        
        int x=INT_MAX, y=INT_MIN;
        
        for(int i=0;i<n;++i){
            
            int num=nums[i], c=0;
            
            if(num>1){
            for(int j=2;j*j<=num;++j){
                if(num % j == 0)++c;
            }
            
            if(c==0){
                x=i;
                break;
            }
            }
        }
        
        for(int i=n-1;i>=0;--i){
            
            int num=nums[i], c=0;
            
            if(num>1){
            for(int j=2; j*j<=num; ++j){
                if(num % j == 0)++c;
            }
            
            if(c==0){
                y=i;
                 break;
             } 
            }
        }
        
        return abs(y-x);
    }
};