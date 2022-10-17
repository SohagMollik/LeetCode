class Solution {
public:
    bool checkIfPangram(string sen) {
        set<char>s;
        for(int i=0;i<sen.size();++i){
            char ch=sen[i];
            s.insert(ch);
        }
        if(s.size()==26) return 1;
        else return 0;
    }
};