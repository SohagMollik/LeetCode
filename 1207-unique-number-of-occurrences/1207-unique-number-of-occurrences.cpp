class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();++i){
            mp[arr[i]]++;
        }
        vector<int>v(0);
        for(auto x: mp){
            int y=x.second;
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        bool ans=true;
        for(int i=1;i<=v.size()-1;++i){
            if(v[i-1]==v[i])
            {
                ans=false;
                break;
            }
        }
        if(ans==false)return 0;
        else return 1;
    }
};