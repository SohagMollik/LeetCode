class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<str.size();++i){
            string temp=str[i];
            sort(str[i].begin(),str[i].end());
            mp[str[i]].push_back(temp);
        }
        for(auto &x: mp)ans.push_back(x.second);
        
        return ans;
    }
};