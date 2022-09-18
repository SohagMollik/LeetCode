class Solution {
public:
    int trap(vector<int>& h) {
        int left=0,right=h.size()-1; 
        int ans=0,l_mx=0,r_mx=0;
        while(left<=right){
            if(h[left]<=h[right]){
                if(h[left]>=l_mx){
                    l_mx=h[left];
                }
                else{
                    ans+=(l_mx-h[left]);
                }
                left++;
            }
            else{
                if(h[right]>=r_mx){
                    r_mx=h[right];
                }
                else{
                    ans+=(r_mx-h[right]);
                }
                right--;
            }
        }
        return ans;
    }
};