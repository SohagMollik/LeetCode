class Solution {
public:
     long int fun(vector<int>& piles, int mid)
     {
         long int total=0;
         for(auto &x: piles){
             if(x%mid==0)total+=(x/mid);
             else total+=(x/mid)+1;
         }
         return total;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
       int l=1;
       int r= *max_element(piles.begin(),piles.end());
       int k;
       while(l<=r){
            k=l+(r-l)/2;
            if(fun(piles,k)<=h)r=k-1;
            else l=k+1;
       }
       return l;
    }
};
