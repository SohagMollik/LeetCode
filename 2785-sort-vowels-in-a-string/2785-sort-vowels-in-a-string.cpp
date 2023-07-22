class Solution {
public:
    string sortVowels(string s) {
        
        string st="";
        for(int i=0;i<s.size();++i){
        if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') or (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')){
                st.push_back(s[i]);
                s[i]='1';
            }
            else {
                s[i]=s[i];
            }
        }
       sort(st.begin(),st.end());

        int idx=0;
       for(int i=0;i<s.size();++i){
           if(s[i]=='1'){
               s[i]=st[idx];
               ++idx;
           }
           else{
               s[i]=s[i];
           }
       }
       return s;

    }
};