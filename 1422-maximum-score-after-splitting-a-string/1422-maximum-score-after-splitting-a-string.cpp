class Solution {
public:
    int maxScore(string s) {
        
       auto mx=0;

        for(int i=0;i<s.size()-1;++i){

            int x=count(s.begin(),s.begin()+i+1,'0');
            int y=count(s.begin()+i+1,s.end(),'1');

            mx=max(mx, x + y);

        }
        
        return mx;
    }
};