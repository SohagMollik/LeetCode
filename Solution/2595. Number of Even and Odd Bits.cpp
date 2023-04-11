class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<long long int>v;
        while(n>0){
          int x=n%2;
            v.push_back(x);
            n/=2;
        }
        int even=0,odd=0;
        for(int i=0;i<v.size();i+=2){
            if(v[i]==1)even++;
        }
        for(int i=1;i<v.size();i+=2){
            if(v[i]==1)odd++;
        }
        return {even,odd};
    }
};
