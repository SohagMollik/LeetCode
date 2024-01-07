class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        
    
        int mx=0,ans=0;
        
        for(int i=0;i<d.size();++i){
            int x=d[i][0];
            int y=d[i][1];
           int dia= ( (x*x) + (y*y) );
            
            
            if(dia>mx ){
                ans=(x*y);
                mx=dia;
            }
            
            if(dia==mx){
                ans=max(ans,(x*y));
                mx=dia;
            }
        }
        
        return ans;
    }
};