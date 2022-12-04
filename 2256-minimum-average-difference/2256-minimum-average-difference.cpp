class Solution {
public:
    int minimumAverageDifference(vector<int>& num) {
     long long int n=num.size();
      long long int p[n+5];
      p[0]=num[0];
        for(int i=1;i<=n-1;++i){
            p[i]=p[i-1]+num[i];
        }

        vector<int>v;

        for(int i=0;i<n;++i){
           if(i==(n-1)){
               int x=round(p[i]/n);
               v.push_back(x);
           }
            else{
               long long int x=p[i]/(i+1);
                long long int y=(p[n-1]-p[i])/(n-(i+1));
                v.push_back(abs(x-y));

            }
        }
        int idx=min_element(v.begin(),v.end())-v.begin();
        return idx;
    }
};