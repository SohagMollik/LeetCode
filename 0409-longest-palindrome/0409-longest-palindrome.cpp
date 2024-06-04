class Solution {
public:
    int longestPalindrome(string s) {
        
        int sz=s.size(), cnt=0;
        map<char, int>mp;
        
        for(auto ch: s){
            mp[ch]++;
            if(mp[ch] % 2==1)++cnt;
            else --cnt;
        }
        
        if(cnt>1) return sz-cnt+1;
        else return sz;
    }
};