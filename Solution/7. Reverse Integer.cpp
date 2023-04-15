class Solution {
public:
    int reverse(long int x) {
        if(x==0)return 0;
       else if(x>0){
           
          long int is_Range=0;
           while(x!=0){
               is_Range=(is_Range*10)+(x%10);
               x/=10;
           }
           if(is_Range>0 && is_Range<2147483649)return is_Range;
           else return 0;
       }

       else{
            x=(-1)*x;
           long int is_Range=0;
           while(x!=0){
               is_Range=(is_Range*10)+(x%10);
               x/=10;
           }
          is_Range=(-1)*is_Range;
           if(is_Range<=-1 && is_Range>-2147483649)return is_Range;
           else return 0;
       }

    }
};