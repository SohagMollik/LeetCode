class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a=n%2;
        int b;
        n/=2;
        while(n!=0){
            b=n%2;
            n/=2;
            if(a==b){
                return false;
                break;
            }
            a=b;
        }

        return true;
    }
};