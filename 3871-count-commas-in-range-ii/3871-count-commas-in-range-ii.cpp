class Solution {
public:
    long long countCommas(long long n) {
        long long start=1000, ans=0;
        while(start<=n){
            ans+=(n-start+1);
            start*=1000;
        }

        return ans;
    }
};