class Solution {
public:
    int minimumSum(int n, int k) {
        int sum;
        int x = k/2;
        if(n <= x){     
            return (n*(n+1))/2;
        }
        
        else{
            
            sum = (x*(x+1))/2;
            
            int y = abs(n-x);
            int m = k;
            while(y--){
                sum+=m;
                m++;
            }
            
            return sum;
        }
    }
};