class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int digit_sum=0, digit_product=1;
        while(n>0){
            digit_sum+=(n%10);
            digit_product*=(n%10);
            n/=10;
        }

        return (temp%(digit_sum + digit_product)==0)?1:0;
    }
};