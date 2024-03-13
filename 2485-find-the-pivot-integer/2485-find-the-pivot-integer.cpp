class Solution {
public:
    int pivotInteger(int n) {
       
        if(n<=1) return n;
        long long int num=((n*n) + n)/2;
        
        long long int left=1, right=num, mid;
        
        while(left<=right){
            mid=left + (right-left)/2;
            if((mid*mid)==num){
                return mid;
                break;
            }
            
            if((mid*mid)<num)left=mid+1;
            else right=mid-1;
        }
        
        return -1;
    }
};