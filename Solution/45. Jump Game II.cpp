class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int current=0;
        int farther=0;
        for(int i=0;i<nums.size()-1;++i){
            farther=max(farther,nums[i]+i);
            if(i==current){
                current=farther;
                jump++;
            }
        }
        return jump;
    }
};
