class Solution {
public:
    int countSymmetricIntegers(int low, int high) {

     int result=0, sum1=0, sum2=0;
     string res;
     
      for(int i=low; i<=high; i++){
         
       res = to_string(i); 
       sum1=0;
       for(int k=0; k<res.size()/2; k++){
        sum1+=(res[k]-'0');
       }
       
       sum2=0;
       for(int j=res.size()/2; j<res.size(); j++){
        sum2+=(res[j]-'0');
       }

        if((sum1==sum2) && (res.size()%2==0)) result++;
    
      }

      return result;  
    }
};