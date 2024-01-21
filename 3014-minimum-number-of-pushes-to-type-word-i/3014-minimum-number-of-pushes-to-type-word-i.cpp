class Solution {
public:
    int minimumPushes(string word) {
        
        int n=word.size();
        int div=n/8;
        int y=div;
        int mod=n%8;
        int ans=0,x=8;
        while(div--){
            ans+=x;
            x+=8;
        }
        y+=1;
        ans+=(y*mod);
        
        return ans;
    }
};