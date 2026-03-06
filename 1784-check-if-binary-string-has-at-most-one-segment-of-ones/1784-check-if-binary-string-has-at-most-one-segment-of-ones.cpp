class Solution {
public:
    bool checkOnesSegment(string s) {
        int f=0,ok=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                int diff=i-f;
                if(diff>1){
                    ok=1;
                    break;
                }
                else f=i;
            }
        }

        if(ok==0)return true;
        else return false;
    }
};