class Solution {
public:
    bool isPalindrome(int s) {
        string xx=to_string(s);
        if(xx[0]=='-')return false;
        else{
           string x=xx;
           reverse(xx.begin(),xx.end());
            if(x==xx)return true;
            else return false;
        }
    }
};
