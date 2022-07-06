class Solution {
public:
    vector<int>shuffle(vector<int>& nums, int n) {
        int k=0;
        vector<int>b(2*n,0);
        for(int i=0;i<n;++i){
            b[k]=nums[i];
            k+=2;
        }
        int x=1;
        for(int i=n;i<=2*n-1;++i){
           b[x]=nums[i];
            x+=2;
        }
        return b;
    }
};