class Solution {
public:
    int dp[502][502];
    int n1,n2;
    int fun(vector<int>& nums1, vector<int>& nums2,int i, int j){
        if(i==n1 || j==n2) { return 0; }
        if(dp[i][j]!=-1){ return dp[i][j];}
        else{
        int first_option = nums1[i]*nums2[j] + fun(nums1, nums2, i+1, j+1);
        int second_option = fun(nums1, nums2, i+1, j);
        int third_option = fun(nums1, nums2, i, j+1);
        
        return dp[i][j] = max({first_option, second_option, third_option});
        }
    }
        
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        n1=nums1.size(), n2=nums2.size();
        memset(dp,-1,sizeof(dp));
        
        int first_max=INT_MIN;
        int second_max=INT_MIN;
        int first_min=INT_MAX;
        int second_min=INT_MAX;
        
        for(auto x: nums1){
            first_max=max(x,first_max);
            first_min=min(x,first_min);
        }
        
         for(auto x: nums2){
            second_max=max(x,second_max);
            second_min=min(x,second_min);
        }
        
        if((first_max<0 && second_min>0) or (first_min>0 && second_max<0)){
            return max(first_max*second_min, first_min*second_max);
        }
        
        return fun(nums1,nums2,0,0);
    }
};