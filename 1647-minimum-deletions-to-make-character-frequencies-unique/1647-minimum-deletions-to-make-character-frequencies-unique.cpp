class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> fre;
        
        for(auto ch: s){
            fre[ch]++;
        }
        
        unordered_set<int>current_fre;
        
        int ans=0;
        for(auto x: fre){
            int val = x.second;
            while(val>0 and current_fre.find(val) != current_fre.end()){
                val--;
                ans++;
            }
            current_fre.insert(val);
        }
        
        return ans;
    }
};