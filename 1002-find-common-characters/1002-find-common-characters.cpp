class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        vector<int>hash1(26, 0);
        vector<int>hash2(26, 0);
        
        for(char ch: words[0]){
            
            hash1[ch - 'a']++;
        }
        
        for(int i=1; i<words.size(); ++i){
            
            for(auto ch: words[i]){
                hash2[ch - 'a']++;
            }
            
            for(int k=0; k<26; ++k){
                hash1[k] = min(hash1[k], hash2[k]);
                hash2[k]=0;
            }
        }
        
        
        vector<string>ans; 
        
        for(int i=0; i<26; ++i){
            
            int res=hash1[i];
            
            if(res > 0){
                
            while(res--){
                char ch = i + 'a';
                ans.push_back(string(1, ch));
            }
                
            }
        }
        
        return ans;
     
         
        
      
        
    }
};