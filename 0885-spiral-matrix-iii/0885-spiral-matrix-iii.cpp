class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
       
        vector<vector<int>>direction = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        vector<vector<int>>ans={{rStart, cStart}};
        
        int step=0,d=0;
        
        while(ans.size() < rows*cols){
            
            if(d==0 or d==2)step++;
            
            for(int i=0; i<step; i++){
                rStart+=direction[d][0];
                cStart+=direction[d][1];
                
                if(rStart>=0 and rStart<rows and cStart>=0 and cStart<cols ){
                    ans.push_back({rStart, cStart});
                }
                
                if(ans.size()==rows*cols)return ans;
            }
            
            d=(d+1)%4;
        }
        
        return ans;
    }
};