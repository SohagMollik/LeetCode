class Solution {
public:
    int totalMoney(int n) {
       if(n<7) return n*(n+1)/2;
        else{
            int div = n/7;
            int mod = n%7;
            int k=0, sum=0, p=7 ;
            
            for(int x=0; x<div; ++x){
                sum+=(p*(p+1)/2)-(x*(x+1)/2);
                ++p;
            }
            
            int q=div+1;
            while(mod--){
                sum+=q;
                ++q;
            }
            
            return sum;
        }
    }
};