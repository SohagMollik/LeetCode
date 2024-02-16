class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
      map<int,int>mp;
      for(auto x: arr){
        mp[x]++;
      }
      
      vector<int>v;
      for(auto pic: mp){
        int y=pic.second;
        v.push_back(y);
      }
      
      sort(v.begin(), v.end());
      
      for(int i=0;i<v.size();++i){
        if(v[i]<=k){
          k-=v[i];
          v[i]=0;
        }
      }
      
      int ans=0;
      for(int i=0;i<v.size();++i){
        if(v[i]!=0)ans++;
      }
      
      return ans;
    }
};