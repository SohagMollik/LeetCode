class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        if(s.size()==0)return 0;
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int x=0,y=0,ans=0;
        
        while(x<g.size() and y<s.size()){
            
            if(g[x]<=s[y]){
                ++ans;
                ++x;
                ++y;
            }
            else{
                ++y;
            }
        }
        
        return ans;
    }
};