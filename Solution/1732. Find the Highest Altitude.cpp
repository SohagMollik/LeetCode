class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=INT_MIN;
        mx=max(0,gain[0]);
        for(int i=1;i<gain.size();++i){
            gain[i]=gain[i]+gain[i-1];
            mx=max(mx,gain[i]);
        }
        return mx;
    }
};