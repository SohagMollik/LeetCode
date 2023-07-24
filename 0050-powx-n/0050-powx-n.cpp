class Solution {
public:
    double myPow(double x, int n) {
        long long m=n;
        if(m < 0){
            m=(-1)*m;
        }
        
        double ans=1.00000;
        while(m>0){
            if(m%2==1){
                ans*=x;
                m--;
            }
            else{
                x*=x;
                m/=2;
            }
        }
        if(n<0) ans=(1.00000/ans);
        
        return ans;
            
    }
};