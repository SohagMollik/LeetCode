class Solution {
    bool isPalimdrome(string s)
    {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l++]!=s[r--]){
                return false;
            }
        }
        return true;
    }
    
    void func(string s,vector<vector<string>>&ans,vector<string>&v){
        
        if(s.size()==NULL){
        ans.push_back(v);
        }
        for(int i=0;i<s.size();++i){
            string part=s.substr(0,i+1);
            if(isPalimdrome(part)){
                v.push_back(part);
                func(s.substr(i+1),ans,v); 
                v.pop_back();
            }
        }
    }
    
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        func(s,ans,v);
        return ans;
    }
};