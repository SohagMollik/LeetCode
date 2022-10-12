class Solution {
public:
    int largestPerimeter(vector<int>& n) {
        sort(n.begin(),n.end());
        int ans;
        int ok=0;
        for(int i=n.size()-3;i>=0;--i){
            int a=n[i];
            int b=n[i+1];
            int c=n[i+2];
            if(a+b>c){
                ok=1;
                ans=a+b+c;
                break;
            }
        }
        if(ok==1) return ans;
        else return 0;
    }
};