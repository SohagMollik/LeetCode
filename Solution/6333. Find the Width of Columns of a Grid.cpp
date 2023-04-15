class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int mx;
        vector<int>v;
        for(int i=0;i<col;++i){
            mx=0;
            for(int j=0;j<row;++j){
                int x=grid[j][i];
                string temp = to_string(x);
                int len=temp.size();
                 mx=max(mx,len);
            }
            v.push_back(mx);

        }
        return v;
    }
};
