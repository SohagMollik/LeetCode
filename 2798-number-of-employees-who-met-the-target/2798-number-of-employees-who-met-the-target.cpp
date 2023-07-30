class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& h, int target) {
        
        int ans=0;
        for(int i=0;i<h.size();++i)
        {
            if(h[i]>=target){
                ans++;
            }
        }
        return ans;
    }
};