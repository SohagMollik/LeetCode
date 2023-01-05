bool compare(vector<int>&x,vector<int>&y){
    return x[1]<y[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& point) {
       sort(point.begin(),point.end(),compare);
        int end=point[0][1];
        int ans=1;
        for(int i=1;i<point.size();++i){
            if(point[i][0]>end){
                ans++;
                end=point[i][1];
            }
            else{
                continue;
            }
        }
        return ans;
    }
};