class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
    
    int n=s1.size(),c=-1,d=-1,cnt=0;
    for(int i=0;i<n;++i){
        if(s1[i]!=s2[i]){
            cnt++;
         if(c==-1){c=i;}
         else if(d==-1){d=i;}
        }
    }

       if(cnt==0)return true;
       else if(cnt==2 && s1[c]==s2[d] && s1[d]==s2[c])return true;
       else return false;
    }
};