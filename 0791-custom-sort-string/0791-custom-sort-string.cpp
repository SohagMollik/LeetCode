class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char,int>mp;
        for(char ch: s){
            mp[ch]++;
        }
        
        string ans="";
        string add="";
        for(char ch: order){
            if(mp.find(ch)!=mp.end()){
                int x=mp[ch];
                while(x--){
                  ans+=ch;
                  mp[ch]--;
                }
            }
            
        }
        
        for(auto it: mp){
            int x=it.second;
            if(x>0){
                while(x--){
                ans+=it.first;
                }
            }
        }
        
        return ans;
    }
};