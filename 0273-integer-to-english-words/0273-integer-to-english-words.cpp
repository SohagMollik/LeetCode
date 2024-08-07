class Solution {
public:
    
    string solve(int num)
    {
       string oneToten [] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
       string tenTotwinty [] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
       string twintyToninty [] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"}; 
        
        string result="";
        
        if(num > 99){
            result+=oneToten[num/100] + " " + "Hundred" + " ";
        }
        
        num%=100;
        
        if(num > 9 && num < 20){
            result+=tenTotwinty[num - 10] + " ";
        }
        
        else{
            
            if(num >= 20){
               result+=twintyToninty[num / 10] + " "; 
            }
            
            num%=10;
            
            if(num>0){
                result+=oneToten[num] + " ";
            }
        }
        
        return result;
        
    }
    
    string numberToWords(int num) {
        
        if(num==0)return "Zero";
        
        string bigNum [] = {"Thousand", "Million", "Billion"};
        
        string result="";
        result = solve(num % 1000);
        
        num/=1000;
        
        for(int i=0;i<3;++i){
            
            if(num>0 && num%1000 > 0){
                result = solve(num%1000) + bigNum[i] + " " + result;
            }
            
            num/=1000;
        }
        
        return result.empty() ? result : result.substr(0, result.size()-1);
    }
};