class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        
        sort(h.begin(), h.end(), greater<int>());
        long long int ans=0;
        long long int x=0;
        for(int i=0;i<k;++i){
            long long int z=(long long int)(h[i]);
            long long int y= z - x;
           if(y>0){
               ans+=y;
               ++x;
           }
            else{
                break;
            }
        }
        
        return ans;
    }
};