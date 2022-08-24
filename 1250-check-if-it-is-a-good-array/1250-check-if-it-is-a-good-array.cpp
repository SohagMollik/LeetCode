class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int a=0;
        bool ok=false;
        for(int i=0;i<nums.size();++i){
            a=__gcd(a,nums[i]);
            if(a==1){
                ok=true;
                break;
            }
        }
        if(ok==true)return true;
        else return false;
    }
};