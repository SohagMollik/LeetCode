class Solution {
public:
    int vowelStrings(vector<string>& word, int left, int right) {
        int c=0;
        for(int i=left;i<=right;++i){
            if((word[i][0]=='a' or word[i][0]=='e' or word[i][0]=='i' or word[i][0]=='o' or word[i][0]=='u') and(word[i] [word[i].size()-1]=='a' or word[i][word[i].size()-1]=='e' or word[i][word[i].size()-1]=='i' or word[i][word[i].size()-1]=='o' or word[i] [word[i].size()-1]=='u')){
                c++;
            }
        }
        return c;
    }
};
