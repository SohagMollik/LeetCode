class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)return 0;
        else{
            bool is_prime[n+1];
            memset(is_prime,true,sizeof(is_prime));
            is_prime[0] = is_prime[1] = false;
     for (int i = 2; i * i < n; i++) {
        if (is_prime[i]) {
        for (int j = i * i; j < n; j += i)
            is_prime[j] = false;
          }
         }
            int c=0;
        for(int i=2;i<n;++i){
            if(is_prime[i])c++;
        }
            
          return c;  
        }
    }
};