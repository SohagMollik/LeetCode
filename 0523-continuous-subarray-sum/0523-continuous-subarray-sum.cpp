class Solution {
public:
    bool checkSubarraySum(vector<int>& v, int k) {
    int n=v.size();
        if(n==1)return 0;
    else{
   int sum=0;
   unordered_map<int,int>mp;
    for(int i=0;i<n;++i){
            sum+=v[i];
            int x=sum%k;
        if(sum%k==0 && i)return 1;
        if(mp.count(x) && (i-mp[x])>=2)return 1;   
        if(mp.count(x)==0) mp[x]=i;
    }
            return 0;
  }
 }
};