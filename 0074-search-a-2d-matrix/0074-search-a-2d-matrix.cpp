class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int mid,low=0,high=(row*col)-1;
        
        while(low<=high){
            mid=low+(high-low)/2;
            if(matrix[mid/col][mid%col]==target){
                    return 1;
                    break;
            }
            else if(matrix[mid/col][mid%col]>target) high=mid-1;
            
            else low=mid+1;
        }
        
        return 0;
    }
};
