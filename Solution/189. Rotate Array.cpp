class Solution {
public:
    void rotate(vector<int>& num, int k) {
      int n=num.size();
        vector<int>ans;
        if(n<k){
            int x=abs((2*n)-k);
            for(int i=x;i<n;++i){
                ans.push_back(num[i]);
            }
            for(int j=0;j<x;++j){
                ans.push_back(num[j]);
            }
            num.clear();
            num=ans;
            ans.clear();
        }
        else{
            for(int i=n-k;i<n;++i){
                ans.push_back(num[i]);
            }
            for(int j=0;j<(n-k);++j){
                ans.push_back(num[j]);
            }
            num.clear();
            num=ans;
            ans.clear();
        }
    }
};