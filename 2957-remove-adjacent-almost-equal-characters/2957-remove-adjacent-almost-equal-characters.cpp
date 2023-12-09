class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        
        for(int i=1;i<word.size();++i){
            if(word[i] == word[i-1]) word[i] = '#';
            else if((int(word[i]) == (int(word[i-1]) + 1)) or ( (int(word[i]) + 1) == int(word[i-1]) )) word[i] = '#';
        }
        
        return count(word.begin(), word.end(), '#');
    }
};