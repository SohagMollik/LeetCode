class Solution {
public:
    string largestGoodInteger(string num) {
    
        string ans="";
        vector<string>v;
        
        for(int i=0;i<num.size()-2;++i){
        
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                   ans+=num[i];
                   ans+=num[i+1];
                   ans+=num[i+2];  
                   v.push_back(ans);
                   ans.clear();
            }
        }
        
        sort(v.begin(),v.end(),greater<string>());
        
        if(v.size()==0) return "";
        else return v[0];
    }
};