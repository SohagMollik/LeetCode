class Solution {
public:
    int garbageCollection(vector<string>& g, vector<int>& t) {

        int p_last=-1;
        int g_last=-1;
        int m_last=-1;
 
for(int ii=1;ii<t.size();++ii)
{
    t[ii]=t[ii-1]+t[ii];
}
        
int p_total=0,g_total=0,m_total=0;
 
 for(int i=0;i<g.size();++i){
 if(count(g[i].begin(),g[i].end(),'P')>0){
p_last=i;
p_total+=count(g[i].begin(),g[i].end(),'P');
 }
     
     
if(count(g[i].begin(),g[i].end(),'G')>0){
g_last=i;
g_total+=count(g[i].begin(),g[i].end(),'G');
 }
     
     
if(count(g[i].begin(),g[i].end(),'M')>0){
m_last=i;
m_total+=count(g[i].begin(),g[i].end(),'M');
 }

}

int ans=0;
        
if(p_last>-1){
if(p_last>0)ans+=p_total+t[p_last-1];
    
else ans+=p_total;
    
}

if(g_last>-1){
if(g_last>0)ans+=g_total+t[g_last-1];
    
else ans+=g_total;
    
}
        
if(m_last>-1){
if(m_last>0)ans+=m_total+t[m_last-1];
    
else ans+=m_total;
    
}


return ans;
    }
};