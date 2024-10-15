class Solution {
public:
    long long minimumSteps(string s) {
       
        int len=s.size();
        long int right=0, left=0, step=0;
        
        for(int i=0; i<len; ++i){
            
            if(s[i]=='0'){
                step+=(left-right);
                right++;
            }
            
            left++;
        }
        
        return step;
    }
};