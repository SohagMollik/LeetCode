class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        vector<pair<int,int>>a,b;
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1[0].size();j++){
                if(img1[i][j]==1)a.push_back({i,j});
                if(img2[i][j]==1)b.push_back({i,j});
            }
        }

        map<pair<int,int>,int>mp;
        int ans=0;
        for(auto it1: a){
            for(auto it2: b){
                int dx=it1.first-it2.first;
                int dy=it1.second-it2.second;

                mp[{dx,dy}]++;

                ans=max(ans, mp[{dx,dy}]);
            }
        }

        return ans;
    }
};