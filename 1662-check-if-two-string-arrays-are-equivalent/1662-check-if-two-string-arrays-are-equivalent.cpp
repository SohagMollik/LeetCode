class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string st={0},dt={0};
        for(int i=0;i<word1.size();++i){
            st=st+word1[i];
        }
        for(int i=0;i<word2.size();++i){
            dt=dt+word2[i];
        }
        if(st==dt)
        return 1;
        else
        return 0;
    }
};