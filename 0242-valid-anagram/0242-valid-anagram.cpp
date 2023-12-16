class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int>mp;
        
        for(auto ch: t){
            mp[ch]++;
        }
        
        for(auto ch: s){
            mp[ch]--;
        }
        
        for(auto x: mp){
            if( x.second != 0){
                return false;
                break;
            }
        }
        
        return true;
    }
};