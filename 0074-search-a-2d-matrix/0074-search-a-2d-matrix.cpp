class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       vector<int>vec;
       for(int i=0;i<matrix.size();++i){
           for(int j=0;j<matrix[0].size();++j){
               vec.push_back(matrix[i][j]);
           }
       }
        int lo=0,hi=vec.size()-1;
        int mid;
        bool ok=false;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(vec[mid]==target)
            {
               ok=true;
                break;
            }
            else if(vec[mid]>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
            
        }
        if(ok==true)return 1;
        else return 0;
    }
};