class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>temp;
        for(int i=0;i<n;++i){
            if(temp.empty()){
                temp.push(s[i]);
            }
            else if(temp.top()=='(' && s[i]==')' || temp.top()=='{' && s[i]=='}' || temp.top()=='[' && s[i]==']'){
                temp.pop();
            }
            else{
                temp.push(s[i]);
            }
        }
        if(temp.empty())return true;
        else return false;
    }
};
