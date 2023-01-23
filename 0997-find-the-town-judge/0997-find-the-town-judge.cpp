class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>ans(n+1,0);
        for(auto &a: trust){
           ans[a[0]]--;
           ans[a[1]]++;  
        }
        for(int i=1;i<=n;++i)if(ans[i]==(n-1))return i;
        
         return -1;
    }
};