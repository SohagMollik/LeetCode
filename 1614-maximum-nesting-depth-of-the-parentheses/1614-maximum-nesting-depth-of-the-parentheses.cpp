class Solution {
public:
    int maxDepth(string s) {
        int ans=0, curr=0;
        for(char c: s){
            if(c=='('){
                curr++;
                ans=max(ans,curr);
            }
            else if(c==')'){
                curr--;
            }
        }

        return ans;
    }
};