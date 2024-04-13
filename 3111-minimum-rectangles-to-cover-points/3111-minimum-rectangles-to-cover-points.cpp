class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        
        vector< pair <int,int> > vec;
        
        for(int i=0;i<points.size();++i){

            vec.push_back( make_pair(points[i][0], points[i][1]) );
            
        }
        
        sort(vec.begin(), vec.end());
        
        int n=points.size();
        int temp=vec[n-1].first;
        int tempp=vec[0].first;
        
        if(points.size()==1 or temp==tempp)return 1;
        
        else{
            
            int res=vec[0].first;
            int ans=0;
            for(int i=1;i<n;++i){
                
                int x=vec[i].first - res;
                if(x>w){
                    res=vec[i].first;
                    ++ans;
                }
                
            }
            return ans + 1;
            
        }
    }
};