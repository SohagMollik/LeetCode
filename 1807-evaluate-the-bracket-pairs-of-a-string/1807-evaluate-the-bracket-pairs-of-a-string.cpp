class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        map<string, string>mp;
        for(int i=0; i<knowledge.size(); i++){
                string key=knowledge[i][0];
                string value=knowledge[i][1];
                mp[key]=value;  
        }

        string ans="";
        for(int i=0; i<s.size(); ){
            if(s[i]=='('){
                i++;
                string temp="";
                while(s[i]!=')'){
                temp+=s[i];
                i++;
                }

                if(mp.find(temp)!=mp.end()){
                    ans+=mp[temp];
                }

                else{
                   ans+="?";
                }

                i++;
            }

            else{
            ans+=s[i];
            i++;
            }
        }

        return ans;
        
    }
};