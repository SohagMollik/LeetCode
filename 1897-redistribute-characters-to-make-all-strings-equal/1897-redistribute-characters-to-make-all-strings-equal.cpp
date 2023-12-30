class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        map<char,int>mp;
        
        for(int i=0;i<words.size();++i){
            for(int j=0;j<words[i].size();++j){
                
            mp[words[i][j]]++;
                
            }
        }
        
        int len=words.size();
        bool ok=true;
        for(auto x: mp){
            if(x.second % len != 0){
                ok=false;
                break;
            }
        }
        
        if(ok==false)return 0;
        else return 1;
    }
};