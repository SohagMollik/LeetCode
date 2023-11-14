class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
      vector<pair<int,int>> hash(26, {-1,-1});
        
        for(int i=0;i<s.size();++i){
            if(hash[s[i]-'a'].first == -1) hash[s[i]-'a'].first = i;
            else hash[s[i]-'a'].second = i;
        }
        
        int ans=0;
        set<char>st;
        for(int k=0;k<26;++k){
            if(hash[k].second != -1){
            int x=hash[k].first;
            int y=hash[k].second;
            for(int p=x+1 ; p<y ;++p){
                st.insert(s[p]);
            }
                ans+=st.size();
                st.clear();
         }
        }
        
        return ans;
    }
};