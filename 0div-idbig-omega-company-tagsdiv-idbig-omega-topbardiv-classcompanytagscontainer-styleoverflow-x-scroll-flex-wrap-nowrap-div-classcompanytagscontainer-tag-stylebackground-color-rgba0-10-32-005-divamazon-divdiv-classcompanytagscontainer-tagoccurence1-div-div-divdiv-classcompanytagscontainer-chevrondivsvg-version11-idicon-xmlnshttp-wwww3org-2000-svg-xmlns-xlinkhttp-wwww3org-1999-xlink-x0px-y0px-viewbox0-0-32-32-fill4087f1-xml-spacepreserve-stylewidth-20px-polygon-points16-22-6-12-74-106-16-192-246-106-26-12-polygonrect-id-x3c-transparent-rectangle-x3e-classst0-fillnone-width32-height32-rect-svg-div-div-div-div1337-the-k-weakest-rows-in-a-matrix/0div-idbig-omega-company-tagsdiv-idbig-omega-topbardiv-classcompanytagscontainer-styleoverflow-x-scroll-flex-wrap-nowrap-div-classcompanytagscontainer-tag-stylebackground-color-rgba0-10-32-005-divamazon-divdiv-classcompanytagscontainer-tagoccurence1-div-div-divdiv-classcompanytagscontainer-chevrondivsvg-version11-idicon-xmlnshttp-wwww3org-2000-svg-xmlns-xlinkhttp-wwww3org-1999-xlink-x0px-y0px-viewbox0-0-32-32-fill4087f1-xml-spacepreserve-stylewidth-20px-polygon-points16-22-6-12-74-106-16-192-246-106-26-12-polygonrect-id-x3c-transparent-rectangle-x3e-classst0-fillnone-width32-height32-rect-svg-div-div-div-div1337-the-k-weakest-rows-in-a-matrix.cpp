class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int row=mat.size();
        int col=mat[0].size();
        
        vector<pair<int,int>>p;
        for(int i=0;i<row;++i){
            
            int one=0;
            for(int j=0;j<col;++j){
                if(mat[i][j]==1)one++;
            }
            
            p.push_back({one, i});            
        }
        
        sort(p.begin(),p.end());
        
        vector<int>ans;
        
        for(int i=0;i<k;++i){
            ans.push_back(p[i].second);
        }
        
        return ans;
    }
};