class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        else {
            double p=log10(n)/log10(3);
            if(p-(int)p==0)return true;
            else return false;
        }
    }
};