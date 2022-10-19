class Solution {
public:
    vector<string> topKFrequent(vector<string>& w, int k) {
        map<string,int>mp;
        for(int i=0;i<w.size();++i){
            mp[w[i]]++;
        }
        priority_queue< pair<int,string> >vec;
        for(auto &x: mp){
            vec.push(make_pair(x.second, x.first));
        }
        vector<string>v;
        while(!vec.empty()){
            v.push_back(vec.top().second);
            vec.pop();
        }
        for(int i=0;i<mp.size();++i){
            for(int j=1;j<mp.size();++j){
                if(v[j-1]>v[j] && mp[v[j-1]]==mp[v[j]])swap(v[j-1],v[j]);
            }
        }
        vector<string>ans;
        for(int i=0;i<k;++i){
            ans.push_back(v[i]);
        }
        return ans;
    }
};