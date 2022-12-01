class Solution {
public:
    bool halvesAreAlike(string s) {
        int part1=0;
        for(int i=0;i<s.size()/2;++i){
            if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U')
                part1++;
        }
        int part2=0;
         for(int i=s.size()/2;i<s.size();++i){
            if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U')
                part2++;
        }
        if(part1==part2)return 1;
        else return 0;
    }
};