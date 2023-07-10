class Solution {
public:
    vector<int> minOperations(string b) {
 int sz=b.size();
vector<int>v;
        
for(int i=0;i<sz;++i){
    
     if(i==0){
    int ans1=0;
for(int jj=i+1;jj<sz;++jj){
        if(b[jj]=='1'){
           ans1+=jj;
        }
    }
    v.push_back(ans1);
}
    
    
  else if(i==sz-1){
    int ans2=0;
for(int jj=i-1;jj>=0;--jj){
        if(b[jj]=='1'){
           ans2+=abs((sz-1)-jj);
            
        }
    }
    v.push_back(ans2);
}  
    
else {
int x=0,y=0;
for(int ii=i-1;ii>=0;--ii){
if(b[ii]=='1'){
    x+=abs(i-ii);
}
}
for(int jj=i+1;jj<sz;++jj){
   if(b[jj]=='1') {
       y+=abs(i-jj);
   }
}
    v.push_back(x+y);
 }
    
}
    return v;
    
    }
};