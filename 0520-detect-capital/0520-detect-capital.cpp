class Solution {
public:
    bool detectCapitalUse(string w) {
        if(w[0]>='A' && w[0]<='Z'){
            int ok=0;
        for(int i=1;i<w.size();++i){
            if(w[i]>='a' && w[i]<='z'){
                ok++;
            }
        }
            if(ok==0 || ok==(w.size()-1))return 1;
            else return 0;
      }
        else{
            int c=0;
            for(int i=1;i<w.size();++i){
                if(w[i]>='A' && w[i]<='Z'){
                    c++;
                }
            }
            if(c==0)return 1;
            else return 0;
        }
    }
};