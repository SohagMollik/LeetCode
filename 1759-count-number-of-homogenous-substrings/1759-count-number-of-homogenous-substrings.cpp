class Solution {
public:
    int countHomogenous(string s) {
        
        long long int ans=0;
        long long int cur=1;
        for(int i=1;i<s.size();++i)
        {
           if(s[i]==s[i-1]) {
               ++cur;
           }
            else{
                int temp=(cur*(cur+1))/2;
                ans+=(temp % 1000000007);
                cur=1;
            }
        }
        
        long long int x=(cur*(cur+1))/2;
        ans+=(x % 1000000007);
        return ans;
    }
};