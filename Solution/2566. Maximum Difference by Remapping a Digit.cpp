class Solution {
public:
    int minMaxDifference(int num) {
         string x=to_string(num);

        string y=x;
        string z=x;
        string w=x;
        char i=y[0];

        sort(w.begin(),w.end());
        char jj=w[0];
        char kk=w[w.size()-1];

        if(jj==kk && jj=='9'){
            return num;
        }

        else if(x[0]=='9'){
        char temp;
        for(int j=0;j<x.size();++j){
            if(x[j]!='9'){
                temp=x[j];
                break;
            }
        }
        replace(y.begin(),y.end(),temp,'9');
        replace(z.begin(),z.end(),'9','0');
          int mx=stoi(y);
        int mn=stoi(z);
        return mx-mn;
        }
        else{

        replace(y.begin(),y.end(),i,'9');
        replace(z.begin(),z.end(),i,'0');

        int mx=stoi(y);
        int mn=stoi(z);
        return mx-mn;
        }
        
    
        
        
    }
};
