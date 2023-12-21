class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        vector<int>ans;
        for(int i=0;i<points.size();++i){
            ans.push_back(points[i][0]);
        }
        
        int mx=0;
        
        sort(ans.begin(),ans.end());
        
        auto ip=unique(ans.begin(), ans.begin() + ans.size());
        
        ans.resize(distance(ans.begin(),ip));
        
      for(int i=1;i<ans.size();++i){
          mx=max(mx,(ans[i]-ans[i-1]));
      }
        
        return mx;
    }
};