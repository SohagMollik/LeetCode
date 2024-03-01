class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
      int c=0;
      for(int i=0;i<s.size();++i){
        if(s[i]=='1')c++;
      }
      
      string ans="";
      for(int i=0;i<s.size()-1;++i){
        ans.push_back('0');
      }
      
      ans.push_back('1');
      
      if(c>1){
      for(int i=0;i<c-1;++i){
        ans[i]='1';
      }
      }
      
      return ans;
    }
};