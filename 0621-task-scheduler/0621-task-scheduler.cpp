class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        int sz=tasks.size(), max_fre=0;
        vector<int>v(26,0);
        for(char it: tasks){
            v[it-'A']++;
            
            if(v[it-'A'] > max_fre){
                max_fre=v[it-'A'];
            }
        }
        
        int cnt=0;
        for(int i=0;i<26;++i){
            if(v[i]==max_fre)++cnt;
        }
        
        int ans=(n+1)*(max_fre-1) + cnt;
        
        return max(sz,ans);
    }
};