class Solution {
public:
    int minimumPushes(string word) {
       
        map<char,int>fre;
        
        for(auto it: word){
            fre[it]++;
        }
        
        vector<int>res;
        
        for(auto it: fre){
            int s=it.second;
            res.push_back(s);
        }
        
        sort(res.begin(), res.end(), greater<int>());
        
        int div=res.size()/8;
        int mod=res.size()%8;
        int k=1, ans=0, last=res.size()-1;
        
        for(int i=0; i<div; i++){
           for(int j=(i*8); j<(i+1)*8; j++){
              ans+=(res[j]*k); 
           } 
            ++k;
        }
        
        while(mod--){
            ans+=(res[last]*(div+1));
            last--;
        }
        
        return ans;
    }
};
