class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        for(int i=0;i<min(word1.size(),word2.size());++i){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(word1.size()>word2.size()){
            for(int i=word2.size();i<word1.size();++i){
                ans+=word1[i];
            }
        }
         else if(word1.size()<word2.size()){
            for(int i=word1.size();i<word2.size();++i){
                ans+=word2[i];
            }
        }
        return ans;
    }
};