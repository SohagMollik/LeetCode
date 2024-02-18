class Solution {
public:
  
  bool isPrefix(string prefix, string str) {
    if (str.size() < prefix.size())
        return false;

    for (size_t i = 0; i < prefix.size(); ++i) {
        if (prefix[i] != str[i])
            return false;
    }

    return true;
}

bool isSuffix(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 > n2)
        return false;
    for (int i = 0; i < n1; i++)
        if (s1[n1 - i - 1] != s2[n2 - i - 1])
            return false;
    return true;
}

    int countPrefixSuffixPairs(vector<string>& w) {
        
      int ans=0;
      for(int i=0;i<w.size()-1;++i){
        for(int j=i+1;j<w.size();++j){
          string s1=w[i];
          string s2=w[j];
          if (isPrefix(s1, s2)  &&  isSuffix(s1, s2) ) {
        //cout << "yes" <<endl;
            ++ans;
         }
          
        }
      }
      
      return ans;
    }
};