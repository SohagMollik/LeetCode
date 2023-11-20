class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        for(int ii=1;ii<travel.size();++ii){
            travel[ii] = travel[ii] + travel[ii-1];
        }
        
        int metal=0, paper=0, glass=0;
        int p=-1, m=-1, g=-1;
        
        for(int i=0;i<garbage.size();++i){
            
            if(count(garbage[i].begin(), garbage[i].end(),'M') > 0){
                m=i;
                metal+=count(garbage[i].begin(), garbage[i].end(),'M');
            }
            
            if(count(garbage[i].begin(), garbage[i].end(),'P')>0){
                p=i;
                paper+=count(garbage[i].begin(), garbage[i].end(),'P');
            }
            
            if(count(garbage[i].begin(), garbage[i].end(),'G')>0){
                g=i;
                glass+=count(garbage[i].begin(), garbage[i].end(),'G');
            }
        }
        
        int ans=0;
        
        if(p>-1){
            if(p>0)ans+=paper+travel[p-1];
            
            else ans+=paper;
        }
        
         if(m>-1){
            if(m>0)ans+=metal+travel[m-1];
             
            else ans+=metal;
        }
        
         if(g>-1){
            if(g>0)ans+=glass+travel[g-1];
             
            else ans+=glass;
        }
        
        return ans;
    }
};