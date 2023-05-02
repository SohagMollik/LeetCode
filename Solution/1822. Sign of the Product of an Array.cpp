class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0,pos=0,zero=0;
        for(auto &x: nums){
            if(x<0)neg++;
            else if(x>0)pos++;
            else zero++;
        }
        if(zero>=1)return 0;
        else if(neg%2==0 && pos>=1)return 1;
        else return -1;
    }
};