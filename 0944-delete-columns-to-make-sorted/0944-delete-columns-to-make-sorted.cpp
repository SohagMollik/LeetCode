class Solution {
public:
    int minDeletionSize(vector<string>& v) {
    int a=v[0].size();
    int n=v.size();
    char mat[n][a];
        for(int j=0;j<n;++j){
            for(int i=0;i<a;++i){
                mat[j][i]=v[j][i];
            }
    }
    int c=0;
    bool ok;
    for(int i=0;i<a;++i){
            ok=false;
        for(int j=1;j<n;++j){
           // cout<<mat[j][i]<<" ";
            if(mat[j-1][i]>mat[j][i]){
                ok=true;
            }
        }
        if(ok==true)c++;
       // cout<<nn;
    }
    //cout<<c<<nn;
     return c;   
    }
};