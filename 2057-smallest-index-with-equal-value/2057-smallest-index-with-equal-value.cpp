class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans,i;
        bool flag = false;
        for(i=0;i<nums.size();++i){
            if(i%10 == nums[i])
            {
                ans=i;
                flag=true;
                break;
            }
        }
        if(flag==true)return ans;
        else return -1;
    }
};