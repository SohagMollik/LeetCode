class Solution {
public:
    int solve(int r, int c, int row, int col,vector<vector<int>>&img)
    {
        int top = max(0,r-1);
        int bottom = min(row,r+2);
        int left = max(0,c-1);
        int right = min(col, c+2);
        
        int temp=0,count=0;
        for(int i=top;i<bottom;++i){
            for(int j=left;j<right;++j){
               temp+=img[i][j];
                ++count;
            }
        }
        
        return temp/count;
        
        
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int n=img.size();
        int m=img[0].size();
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        
         for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                ans[i][j]=solve(i,j,n,m,img);
            }
         }
        
        return ans;
    }
};