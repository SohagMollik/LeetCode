class Solution {
public:
  int integerBreak(int n) {
      
       if(n<=3)return n-1;
      else{
        int div=n/3;
        int mod=n%3;   
        int x=pow(3,div-1);
        x*=(3+mod);
        int y=pow(3,div);
        y*=mod;
        return max(x,y);
       }
    }
};