class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int f=0, l=s.size()-1;
        
        while(f<l){
            char temp=s[f];
            s[f]=s[l];
            s[l]=temp;
            ++f;
            --l;
        }
        
    }
};