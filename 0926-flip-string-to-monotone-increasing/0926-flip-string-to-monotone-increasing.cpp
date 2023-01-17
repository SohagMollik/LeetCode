class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans=0;
        int one=0;
        for(auto &i: s){
            if(i=='1')one++;
            else {
               ans++;
               ans=min(ans,one);
            }
        }
        return ans;
        
    }
};