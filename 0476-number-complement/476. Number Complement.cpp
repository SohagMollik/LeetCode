class Solution {
public:
    int findComplement(int num) {
        string st="";
        
        while(num!=0){
            string x=to_string(num%2);
            st+=x;
            num/=2;
        }
        
        reverse(st.begin(), st.end());
        
        for(int i=0; i<st.size(); ++i){
            if(st[i]=='0')st[i]='1';
            else st[i]='0';
        }
        
        long long int ans=0, k=0;
        for(int i=st.size()-1; i>=0; --i){
            int x=st[i]-'0';
            long long int y= (long long int)x*pow(2,k);
            ans+=y;
            ++k;
        }
        
        return ans;
    }
};
