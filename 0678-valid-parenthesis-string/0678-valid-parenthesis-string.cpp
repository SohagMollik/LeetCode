class Solution {
public:
    bool checkValidString(string s) {
        
        int left=0,right=0, n=s.size();
        
        for(int i=0;i<n;++i){
            if(s[i]=='('){
                ++left;
                ++right;
            }
            else if(s[i]==')'){
                --left;
                --right;
            }
            else{
                --left;
                ++right;
            }
            
            if(right<0)return false;
            if(left<0)left=0;
        }
        
        return left==0;
    }
};