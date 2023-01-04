class Solution {
public:
    int minimumRounds(vector<int>& v) {
     map<int,int>mp;
     int n=v.size();
    for(int i=0;i<n;++i){
        mp[v[i]]++;
    }
        int ans=0;
        int sum=0;
        int a,b,c;
        for(auto &x: mp){
            int y=x.second;
            if(y==1){
                ans=1;
                break;
            }
            if(y%3==0){
                a=y/3;
             }
                b=(y/3)+1;
                c=(y/3)+2;

            if(y%3!=0){
            int mn=min({b,c});
            sum+=mn;
            }
            else{
                int mn=min({a,b,c});
                sum+=mn;
            }
        }

        if(ans==1)return -1;
        else return sum;
    }
};