class Solution {
public:
    int maxVowels(string s, int k) {
       set<char>st{'a','e','i','o','u'};
       int c=0;
       for(int i=0;i<k;++i){
           c+=st.count(s[i]);
       }
       int i=0,j=k;
      int mx=c;
      while(j<s.size()){
          if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u')c++;
          if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')c--;
          mx=max(mx,c);
          i++;
          j++;
      }
      
       return mx; 
    }
};