class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string st="";
        string bt="";
        for(int i=0;i<w1.size();++i){
            st+=w1[i];
        }
        for(int i=0;i<w2.size();++i){
            bt+=w2[i];
        }
        if(st.size()!=bt.size())return 0;
        else{
        for(int i=0;i<st.size();++i){
            if(st[i]!=bt[i]){
                return 0;
                break;
            }
        }
            return 1;
        }
    }
};