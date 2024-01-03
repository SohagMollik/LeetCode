class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        if(bank.size()==1)return 0;
    
        vector<int>v;
        
        for(int i=0;i<bank.size();++i){
            int c=count(bank[i].begin(), bank[i].end(), '1');
            if(c!=0)
            v.push_back(c);
        }
        
        int ans=0;
        if(v.size()!=0){
        for(int i=0;i<v.size()-1;++i){
            ans+=(v[i]*v[i+1]);
        }
        }
        
        return ans;
    }
};