class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        long long mxStart=0,minStart=0, start=0,res=0;
        bool mxFound=false, minFound=false;
        
        for(int i=0;i<n;++i){
            if(nums[i]<minK or nums[i]>maxK){
                start=i+1;
                mxFound=false;
                minFound=false;
            }
            
            if(nums[i]==minK){
                minStart=i;
                minFound=true;
            }
            if(nums[i]==maxK){
                mxStart=i;
                mxFound=true;
            }
            
            if(mxFound and minFound){
                res+=(min(minStart,mxStart) - start + 1);
            }
        }
        
        return res;
    }
};