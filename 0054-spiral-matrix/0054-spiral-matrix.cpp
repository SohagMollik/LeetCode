class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int>ans;
        int top=0,right=col-1,left=0,bottom=row-1;
        
        while(left<=right and top<=bottom){
        
        //left to right
        for(int i=left;i<=right;++i){
            ans.push_back(matrix[top][i]);
        }
        top++;
        
        //right to bottom
        for(int i=top;i<=bottom;++i){
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        //right to left
        if(top<=bottom){
        for(int i=right;i>=left;--i){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        
        //bottom top
        if(left<=right){
        for(int i=bottom;i>=top;--i){
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
        }
        
        return ans;
    }
};