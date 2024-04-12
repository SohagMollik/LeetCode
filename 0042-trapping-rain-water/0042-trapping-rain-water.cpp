class Solution {
public:
    int trap(vector<int>& height) {
       
        int left=0, right=height.size()-1, left_max=0, right_max=0, ans=0;
        
        while(left<=right){
            
            if(height[left]>=height[right]){
                if(height[right] >= right_max){
                    right_max=height[right];
                }
                else{
                    ans+=(right_max - height[right]);
                }
                
                --right;
            }
            
            else{
                if(height[left]>left_max){
                    left_max=height[left];
                }
                else{
                    ans+=(left_max - height[left]);
                }
                
                ++left;
            }
        }
        
        return ans;
    }
};