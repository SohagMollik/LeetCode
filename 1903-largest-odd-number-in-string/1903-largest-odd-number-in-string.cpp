class Solution {
public:
    string largestOddNumber(string num) {
       
        int k;
        for(int i=num.size()-1; i>=0; --i){
            
            if((num[i] - '0') % 2 != 0){
               k=i;
                break;
            }
        }
        
        string ans="";
        for(int i=0;i<=k;++i){
           ans+=num[i];
        }
        
        return ans;
    }
};