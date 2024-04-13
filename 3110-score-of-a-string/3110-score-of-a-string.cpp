class Solution {
public:
    int scoreOfString(string s) {
        
        int sum=0;
        for(int i=1;i<s.size();++i){
           int x=(int)(s[i]);
        int y=(int)(s[i-1]);
            sum+=abs(x-y);
        }
        
        return sum;
    }
};