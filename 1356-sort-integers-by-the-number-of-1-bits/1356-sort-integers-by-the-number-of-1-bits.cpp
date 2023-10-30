class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>p;
        for(int i=0; i<arr.size(); ++i){
            int x = __builtin_popcount(arr[i]);
            p.push_back({x,arr[i]});
        }
        sort(p.begin(),p.end());
        arr.clear();
        for(int i=0;i<p.size();++i){
            arr.push_back(p[i].second);
        }
        
        return arr;
    }
};