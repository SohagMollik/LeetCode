class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        map<char,int>fre;
        
        for(int i=0;i<n;++i){
            fre[word[i]]++;
        }
        vector<int>v;
        
        for(auto x: fre){
            int y=x.second;
            v.push_back(y);
        }
        
         if(v.size()<=8){
          for(int i=0;i<v.size();++i){
          ans+=v[i];
        }
      }
        
      else{
          
        sort(v.begin(),v.end(),greater<int>());
        
        int div=v.size() / 8;
        int mod=v.size() % 8;
        
        vector<int>vec;
        for(int i=0;i<div;++i){
            int sum=0;
            for(int j=(i*8);j<(i+1)*8;++j){
                sum+=v[j];
            }
            vec.push_back(sum);
        }
        
        for(int i=0;i<div;++i){
            ans+=((i+1)*vec[i]);
        }
        
        if(v.size()>8){
        int z=v.size()-1;
        for(int i=0;i<mod;++i){
            ans+=((div+1)*v[z]);
            z-=1;
        }
       }
         
     }
        
        
        return ans;
         
    }
};