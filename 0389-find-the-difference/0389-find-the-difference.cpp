class Solution {
public:
    char findTheDifference(string s, string t) {
          
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
        
        char ans[2];
        bool ok=false;
        for(int i=0;i<s.size();++i){
            if(s[i] != t[i]){
                ans[0]=t[i];
                ok=true;
                break;
            }
        }
        
        if(ok==false)ans[0]=t[t.size()-1];
        
        return ans[0];
        
        
    }
};