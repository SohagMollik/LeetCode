class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        //  By using Brian Kernighan’s Algorithm:  
        
        int one=0;
        while(n){
            n&=(n-1);
            one++;
        }
        
        return one;
    }
};