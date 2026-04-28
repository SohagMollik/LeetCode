class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int>s;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                s.push_back(grid[i][j]);
            }
        }

        sort(s.begin(), s.end());
        int mid=s[s.size()/2];

        int ans=0, ok=0;
        for(auto it: s){
            int temp=abs(it-mid);
            if(temp%x!=0){
                ok=1;
                break;
            }
            else{
                ans+=(temp/x);
            }
        }

        if(ok==1)return -1;
        else return ans;
    }
};