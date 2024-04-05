class Solution {
public:
    int maxDepth(string s) {
       int cur=0, maxi=0;
    
        for(char ch: s){
            if(ch=='('){
            ++cur;
            maxi=max(maxi,cur);
            }
            else if(ch==')') {
                --cur;
            }
            
        
        }
        
        return maxi;
    }
};