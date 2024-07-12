class Solution {
public:
    int maximumGain(string s, int x, int y) {
        
        int res=0, first_score=0, second_score=0;
        
        string first_sub="", second_sub="";
        
        if(x>y){
            first_sub="ab";
            first_score=x;
            second_sub="ba";
            second_score=y;
        }
        
        else{
            first_sub="ba";
            first_score=y;
            second_sub="ab";
            second_score=x;
        }
        
        vector<char>stack;
        
        for(char ch: s){
            
            if(ch==first_sub[1] && !stack.empty() && stack.back()==first_sub[0]){
                res+=first_score;
                stack.pop_back();
            }
            
            else{
            stack.push_back(ch);
            }
        }
        
        vector<char>new_stack;
        
        for(char ch: stack){
            if(ch==second_sub[1] && !new_stack.empty() && new_stack.back()==second_sub[0]){
                res+=second_score;
                new_stack.pop_back();
            }
            
            else{
            new_stack.push_back(ch);
            }
        }
        
        return res;
    }
};