class Solution {
public:
    int arrangeCoins(int n) {
        long long int i=1,ans=0,sum=0;
        if(n==1)return 1;
        else{
        while(i<n){
            sum+=i;
            if(sum>n)break;
            else {
                i++;
                ans++;
            }
        }
        return ans;
        }
    }
};