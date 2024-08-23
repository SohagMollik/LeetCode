class Solution {
public:
    string fractionAddition(string expression) {
        
        if(expression.size()<=4) return expression;
       
       else{
        
        if(expression[0]!='-')
        expression.insert(0,"+");
        
        vector<int>hor;
        vector<int>lob;
        string sign="";
        
        for(int i=0; i<expression.size(); i++){
            
            //lob push
            if(expression[i]=='/'){
                if(expression[i-1]=='0'){
                    lob.push_back(10);
                }
                
                else{
                    int p = expression[i-1] - '0';
                    lob.push_back(p);
                }
            }
            
            //hor push
            if(expression[i]=='/'){
                if(i+2<expression.size()){
                    if((expression[i+2]!='+' or expression[i+2]!='-') && (expression[i+2]=='0')){
                        hor.push_back(10);
                    }
                    else{
                       int p = expression[i+1] - '0'; 
                       hor.push_back(p);
                    }
                }
                
                else{
                   int p = expression[i+1] - '0'; 
                   hor.push_back(p); 
                }
            }
            
            //sign push
            if(expression[i]=='+' or expression[i]=='-'){
                sign.push_back(expression[i]);
            }
        }
        
        
         int gcd = __gcd(hor[0], hor[1]);
        int lcm = (hor[0]*hor[1])/gcd;
            
        for(int i=2; i<hor.size(); ++i){
            gcd = __gcd(gcd,hor[i]);
            lcm = (lcm*hor[i])/gcd;
        }
        
         int y=0;
        for(int i=0; i<hor.size(); ++i){
            
            int x = lcm/hor[i];
            if(sign[i]=='-')
            y+=(lob[i]*(-1)*x);
            else y+=(lob[i]*x);
        }
        
        //cout<<y<<endl;
        
            int z = abs(y);
            int new_gcd = __gcd(z,lcm);
            
            int a = y/new_gcd;
            int b = lcm/new_gcd;
            
            string ans = to_string(a) + "/" + to_string(b);
            
            return ans;
        
      }
    }
};