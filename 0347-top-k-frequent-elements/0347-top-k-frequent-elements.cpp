class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
    int n=v.size();
    vector<int>ans;
    map<int,int>mp;
    vector<pair<int,int>>p;
    for(int i=0;i<n;++i){
        mp[v[i]]++;
    }
    for(auto &x: mp){
       p.push_back(make_pair(x.second,x.first));
    }
    sort(p.begin(),p.end());
    int m=p.size()-1;
    while(k--){
       //cout<<p[m].s<<nn;
       ans.push_back(p[m].second);
       m--;
    }
        return ans;
    }
};