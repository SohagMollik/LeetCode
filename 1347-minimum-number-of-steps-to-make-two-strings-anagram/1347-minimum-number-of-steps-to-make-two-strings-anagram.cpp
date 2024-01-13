class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int>hash1;
        map<char,int>hash2;

        for(int i=0;i<s.size();++i){
            hash1[s[i]]++;
        }

        for(int i=0;i<t.size();++i){
            hash2[t[i]]++;
        }

        int ans=0;
        for(auto pic: hash1){
               char x=pic.first;
               int y=pic.second;
               auto it=hash2[x];

            if(y>it)ans+=(y-it);
        }

        return ans;
    }
};