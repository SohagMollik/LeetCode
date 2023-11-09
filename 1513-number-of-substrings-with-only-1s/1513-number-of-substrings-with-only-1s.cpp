class Solution {
public:
    int numSub(string s) {
        
        long long int ans=0;
        long long int cur,x,temp;
        
        vector<long long int>v;
        for(int i=0;i<s.size();++i){
           
            
           if(s[i]=='1'){
               v.push_back(i);
           } 
            
            else{
                
                if(v.size()>=1){
                cur=(v[v.size()-1]-v[0])+1;
                temp = (cur*(cur+1))/2;
                ans+=(temp % 1000000007);
                v.clear();
                }
            }
        }
        
        if(v.size()>=1){
        cur=(v[v.size()-1]-v[0])+1;
        x = (cur*(cur+1))/2;
        ans+=(x % 1000000007);
        v.clear();
        }
        
        return ans;
    }
};