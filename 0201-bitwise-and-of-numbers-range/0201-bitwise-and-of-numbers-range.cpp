class Solution {
public:
  
 int MsbPosition(int n){
    
    int pos=-1;
    
    while(n){
      n=n>>1;
      pos++;
    }
    
    return pos;
  }
  
    int solution(int x, int y)
    {
      int ans=0;
      
      while(x && y){
      int p1=MsbPosition(x);
      int p2=MsbPosition(y);
      
      if(p1 != p2)break;
        
      int msb_val=1<<p1;
      ans+=msb_val;
      
      x-=msb_val;
      y-=msb_val;
        
      }
      
      return ans;
    }
  
    int rangeBitwiseAnd(int left, int right) {
        
      return solution(left, right);
    }
};