class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        int area=INT_MIN; double diagonal=0, currDiagonal=0;

        for(int i=0;i<dimensions.size();i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];

             currDiagonal = sqrt((length*length)+(width*width));
             if(currDiagonal>=diagonal){
                area=max(area,length*width);
                diagonal=currDiagonal;
             }

        }

        return area;
    }
};