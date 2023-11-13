class Solution {
public:
    string sortVowels(string s) {
        
        string st="";
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                st+=s[i];
                s[i]='#';
            }
        }
        
        sort(st.begin(),st.end());
        
        int k=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='#'){
                s[i]=st[k];
                ++k;
            }
        }
        
        return s;
    }
};