class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>mp;
        for(auto &x: arr){
            mp[x]++;
        }
            vector<int>ans;
        for(auto &y: mp){
            ans.push_back(y.second);
        }
        sort(ans.begin(),ans.end());
            bool ok=true;
            for(int i=1;i<ans.size();++i){
                if(ans[i-1]==ans[i]){
                    ok=false;
                    break;
                }
            }
            if(ok==true)return 1;
            else return 0;
    }
};