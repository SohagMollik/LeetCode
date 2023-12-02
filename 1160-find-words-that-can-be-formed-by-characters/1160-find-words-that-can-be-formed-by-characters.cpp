class Solution {
public:
    
    bool Check(string&word, vector<int>&v){
        
        vector<int>vec(26, 0);
        for(char x: word){
            int y = x - 'a';
            vec[y]++;
            
            if(vec[y] > v[y]){
                return false;
            }
        }
        
        return true;
    }
    
    int countCharacters(vector<string>& words, string chars) {
        
        int ans=0;
        vector<int>v(26, 0);
        for(char ch: chars ){
            v[ch - 'a']++;
        }
        
        for(auto word: words){
            if(Check(word, v))
            ans+=word.size();
        }     
        
        return ans;
    }
};