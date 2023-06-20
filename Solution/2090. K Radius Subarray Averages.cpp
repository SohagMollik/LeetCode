class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int>ans(nums.size());
        vector<long long int>prefix(nums.size());

        for(int i=0;i<nums.size();++i){
            ans[i]=nums[i];
        }

        if(nums.size()%2==0 and nums.size()/2<=k){
          
               for(int i=0;i<nums.size();++i){
                 nums[i]=-1;
               }
        
        }
        else if(nums.size()%2!=0 and nums.size()/2<k){
             
                for(int i=0;i<nums.size();++i){
                  nums[i]=-1;
               }
                
        }

        else{
        
        prefix[0]=(long long int)ans[0];
        for(int i=1;i<ans.size();++i){
            prefix[i]=prefix[i-1]+(long long int)ans[i];
        }
        
        for(int i=0;i<k;++i){
           nums[i]=-1;
        }

        for(int i=k;i<ans.size()-k;++i){
          long long int sum;
            if((i-k)==0){
                sum=prefix[i+k];
            }
            else{
                sum=prefix[i+k]-prefix[i-k-1];
            }
            
            int x=sum/((2*k)+1);
            nums[i]=x;

        }

        for(int i=nums.size()-k;i<nums.size();++i){
            nums[i]=-1;
        }
    
    }
    return nums;
    }
};