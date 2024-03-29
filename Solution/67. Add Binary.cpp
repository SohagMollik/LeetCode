class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int len1=a.size();
        int len2=b.size();
        
        int i=0,carry=0;
        while(i<len1 || i<len2 || carry!=0){
            int x=0;
            if(i<len1 and a[len1-i-1]=='1'){
                x=1;
            }
            int y=0;
            if(i<len2 and b[len2-i-1]=='1'){
                y=1;
            }
            ans=to_string((x+y+carry)%2) + ans;
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
    }
};
