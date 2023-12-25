class Solution {
public:
    int numDecodings(string s) {
        
        if(s.size()==0)return 0;
        else if(s[0]=='0')return 0;
        else if(s.size()==1)return 1;
       else{ 
        int val1=1,val2=1;
        
        for(int i=1;i<s.size();++i){
            int ans=0;
            int d1=s[i]-'0';
            int d2=(s[i-1]-'0')*10 + d1;
            if(d1>=1)
                ans+=val2;
            
            if(d2>=10 && d2<=26)
                ans+=val1;
            
            val1=val2;
            val2=ans;          
            
        }
        
        return val2;
       }
    }
};