
class Solution {
public:
    double myPow(double x, int n) {
        long long int temp=abs(n);
        double y=abs(x);
        double ans=1;
        
        while(temp>0){
            if(temp%2!=0){
                ans*=y;
                --temp;
            }
            else{
                y*=y;
                temp/=2;
            }
        }
       
        
     if(n>0 and x>0){
         ans=ans;
     }
        
     else if(x>0 and n<0){
            ans = (1.00000/ans);  
        }
        
    else if(x<0 and n>0){
            if(n%2==0){
                ans=ans;  
            }
    
        
            else {
                ans=((-1.00000)*ans);
               
            }
        }
        
        
        else if(x<0 and n<0){
            if(abs(n)%2==0){
                ans = (1.00000/ans);
               
            }
            else {
               ans=(-1.00000)*(1.00000/ans);
               
            } 
        }
        
         
        if(n==1)return x;
        else if(x==1.00000)return (abs(n)%2!=0 && n<0)? -1.00000:1.00000;
        else if(x==0)return 0.00000;
        else return ans;
    }
};