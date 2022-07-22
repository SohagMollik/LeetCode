class Solution {
public:
    int trailingZeroes(long long int n) {
       long long int div=5,ans=0;
        while(div<=n){
            ans+=(n/div);
            div*=5;
        }
        return ans;
    }
};