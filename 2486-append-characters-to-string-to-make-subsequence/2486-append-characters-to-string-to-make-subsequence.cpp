class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int k=0, i=0;
        
        for(i=0;i<s.size(); ){
            
            if(s[i] == t[k]){
                ++k;
                ++i;
            }
            
            else if(s[i] != t[k]){
                ++i;
            }
            
        }
              
        
        return t.size() - k;
    }
};