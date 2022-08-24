class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        int row=rec.size();
        vector<double>v;
        for(int i=0;i<row;++i){
            double ratio=(double)rec[i][1]/(double)rec[i][0];
            v.push_back(ratio);
        }
        map<double,int>mp;
        long long int ans=0;
        for(int i=0;i<v.size();++i){
            mp[v[i]]++;
        }
        for(auto &x: mp){
            ans+=1L*(x.second)*1L*(x.second-1)/2;
        }
        return ans;
        
    }
};