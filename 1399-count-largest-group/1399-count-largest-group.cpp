class Solution {
public:
    int countLargestGroup(int n) {

       map<int,int>mp;

       int maxSize=0, ans=0;
       for(int i=1;i<=n;i++){
        int k=i, sum=0;
        while(k!=0){
            sum+=k%10;
            k/=10;
        }
        mp[sum]++;
            maxSize = max(maxSize, mp[sum]);
       }

       for(auto res: mp){
        if(res.second==maxSize)ans++;
       }

       return ans;
       
    }
};