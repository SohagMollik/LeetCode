class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int five=0, ten=0;
        
        for(int i=0; i<bills.size(); ++i){
            
            if(bills[i]==5){
                five++;
            }
            
            else if(bills[i]==10){
                ten++;
                if(five <= 0){
                    return false;
                    break;
                }
                
                else{
                    five--;
                }
            }
            
            else{  
                if((five<=0 && ten<=0) or (ten>0 && five<=0) or (five<3 && ten<=0)){
                   return false;
                    break;
                }
                
                else if(five>=3 && ten<=0){
                    five-=3;
                }
                
                else{
                    five--;
                    ten--;
                }
            }

            
        }
        
         return true;
      
    }
};