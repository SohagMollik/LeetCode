class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        vector<vector<int>>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                v.push_back(matrix[j][i]);
            }
            ans.push_back(v);
            v.clear();
            
        }
        
    
        return ans;
    }
};