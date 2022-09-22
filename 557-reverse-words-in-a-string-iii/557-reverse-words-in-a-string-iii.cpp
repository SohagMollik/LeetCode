class Solution {
public:
    string reverseWords(string s) {
        for(int i=0;i<s.size();++i)
        {
           int j=i;
            while(i<s.size() && s[i]!=' '){
                i++;
            }
            reverse(s.begin()+j,s.begin()+i);
        }
        return s;
        
    }
};