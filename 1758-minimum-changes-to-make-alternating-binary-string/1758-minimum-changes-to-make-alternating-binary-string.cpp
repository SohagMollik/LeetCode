class Solution {
public:
    int minOperations(string s) {
        
        string first="1";
        string second="0";

        for(int i=1;i<s.size();++i){
            if(first[i-1]=='1') first.push_back('0');
            else first.push_back('1');
        }


        for(int i=1;i<s.size();++i){
            if(second[i-1]=='0') second.push_back('1');
            else second.push_back('0');
        }
        
        
        int a=0,b=0;
        for(int i=0;i<s.size();++i){
                  
           if(first[i]!=s[i])++a;
           if(second[i]!=s[i])++b;
        }
        
        return min(a,b);
    }
};