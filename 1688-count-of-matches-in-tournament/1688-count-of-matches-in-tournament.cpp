class Solution {
public:
    int numberOfMatches(int n) {
        
        int ans=0,temp;
        while(n != 1){
            temp=n;
            n/=2;
            if(temp%2==0)ans+=n;
            else ans+=(n+1);
        }
        
        return ans;
    }
};