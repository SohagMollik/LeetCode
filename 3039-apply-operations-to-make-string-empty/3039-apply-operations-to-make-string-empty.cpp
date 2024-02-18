class Solution {
public:
    string lastNonEmptyString(string s) {
        
      map<char,int>mp;
      
      int mx=0;
      for(int i=0;i<s.size();++i){
        mp[s[i]]++;
        mx=max(mx,mp[s[i]]);
      }
      
      
      string ans="";
      for(int i=s.size()-1;i>=0;--i){
        if(mp[s[i]]==mx){
          auto ch=ans.find(s[i]);
          if(ch==string::npos)ans+=s[i];
        }
      }
      
      reverse(ans.begin(), ans.end());
      return ans;
    }
};