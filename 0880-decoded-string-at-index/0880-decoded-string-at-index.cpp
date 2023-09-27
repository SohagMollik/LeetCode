class Solution {
public:
    string decodeAtIndex(string s, int k) {
        
        long long len=0;
        
        for(int i=0;i<s.size();++i){
            if(s[i]>='a' && s[i]<='z'){
                len++;
            }
            else{
                len*=(s[i]-'0');
            }
        }
        
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]>='2' && s[i]<='9'){
                len/=(s[i]-'0');
                k%=len;
            }
            else{
                if(k==0 or k==len)return string(1,s[i]);
                else len--;
            }
        }
      
        return "";
    }
};