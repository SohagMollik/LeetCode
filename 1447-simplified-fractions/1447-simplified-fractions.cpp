class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        for(int i=1;i<n;++i){
            for(int j=i+1;j<=n;++j){
                int gcd=__gcd(i,j);
                if(gcd==1){
                  string a=to_string(i);
                  string c=to_string(j);
                   string b("/");
                    string ans=a+b+c;
                    v.push_back(ans);
                }
            }
        }
        return v;
    }
};