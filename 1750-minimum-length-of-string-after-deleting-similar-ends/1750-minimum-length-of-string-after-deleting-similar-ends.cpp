class Solution {
public:
    int minimumLength(string s) {
        
        int low=0, high=s.size()-1;
        
        while(low<high && s[low]==s[high]){
           
            char ch=s[low];
                while(s[low]==ch && low<=high){
                    ++low;
                }
            
                while(s[high]==ch && high>=low){
                    --high;
                }
        }
        
        return high - low + 1;
    }
};