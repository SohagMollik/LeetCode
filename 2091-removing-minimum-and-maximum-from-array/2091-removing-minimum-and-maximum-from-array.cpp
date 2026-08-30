class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mnIndex, mxIndex, mn=INT_MAX, mx=INT_MIN, a=-1, b=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                a=i;
                mx=nums[i];
            }
            if(nums[i]<mn){
                b=i;
                mn=nums[i];
            }
        }

        mnIndex=min(a,b);
        mxIndex=max(a,b);

        int x, y, z;
        x= mxIndex+1;
        y= nums.size()- mnIndex;
        z= (mnIndex+1) + (nums.size()-mxIndex);

        return min({x,y,z});

    }
};