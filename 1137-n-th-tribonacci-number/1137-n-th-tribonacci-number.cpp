class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        else if(n==1)return 1;
        else if(n==2)return 1;
        else{
        vector<int>ans;
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);
        for(int i=3;i<=n;++i){
            ans.push_back(ans[i-1]+ans[i-2]+ans[i-3]);
         }
            int x=ans.back();
            ans.clear();
            return x;
        }
    }
};