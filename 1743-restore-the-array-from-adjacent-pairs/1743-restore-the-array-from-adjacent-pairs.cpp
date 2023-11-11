class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        unordered_map<int,vector<int>>hash_map;
        
        for(auto &pair: adjacentPairs){
            hash_map[pair[0]].push_back(pair[1]);
            hash_map[pair[1]].push_back(pair[0]);
        }
        
        vector<int>ans;
        
        for(auto &x: hash_map){
            if(x.second.size() == 1){
                ans = {x.first, x.second[0]};
                break;
            }
        }
        
        while(ans.size() < adjacentPairs.size()+1){
            
            int last = ans[ans.size()-1];
            int prev = ans[ans.size()-2];
            
           vector<int>candidate = hash_map[last];
            int next_element = (candidate[0] != prev)? candidate[0]:candidate[1];
            ans.push_back(next_element);
        }
                  
        
        return ans;
    }
};