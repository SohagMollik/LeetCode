class Solution {
public:
    int subtractProductAndSum(int n) {
        string st=to_string(n);
        int mul=1,add=0;
        for(int i=0;i<st.size();++i){
            mul=mul*(st[i]-'0');
            add+=(st[i]-'0');
        }
        return mul-add;
    }
};