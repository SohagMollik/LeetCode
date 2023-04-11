class Solution {
public:
    long long pickGifts(vector<int>& gift, int k) {
        int n=gift.size();
        long long int arr[n+1];
        for(int i=0;i<gift.size();++i){
            arr[i]=(long long int)(gift[i]);
        }
        for(int i=0;i<k;++i){
            sort(arr,arr+n,greater<long long int>());
            long long int x=sqrt(arr[0]);
            arr[0]=x;
        }
       long long int ans=0;
        for(int i=0;i<n;++i){
            ans+=arr[i];
        }
        return ans;
        
    }
};
