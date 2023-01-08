class Solution {
public:
    int maxPoints(vector<vector<int>>& point) {
        if(point.size()<=2)return point.size();
        int ans=0;  
        for(auto &it1: point){
            unordered_map<double,int>mp;
            double x1=it1[0];
            double y1=it1[1];
            for(auto &it2: point){
                 if(it1==it2)continue;
                double x2=it2[0];
                double y2=it2[1];
                double slop;
                    if(x2-x1==0){
                        slop=INT_MAX;
                    }
                    else{
                        slop=(y2-y1)/(x2-x1);
                    }
                
                mp[slop]++;
                ans=max(ans,mp[slop]);
            }
        }
        return ans+1;
    }
};