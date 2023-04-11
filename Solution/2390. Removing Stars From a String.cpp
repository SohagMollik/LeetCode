class Solution {
public:
    string removeStars(string s) {
        int n=s.size()-1;
        stack<char>st;
        for(int i=n;i>=0;--i){
            st.push(s[i]);
        }
        string ans="";
        while(!st.empty()){
            if(st.top()!='*'){
                ans.push_back(st.top());
                st.pop();
            }
            else{
                ans.pop_back();
                st.pop();
            }
        }
       
        return ans;
    }
};
