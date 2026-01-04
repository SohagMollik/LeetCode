class Solution {
public:
    int sumFourDivisors(vector<int>& num) {
        set<int>s;
        long sum=0;
        for(int i=0; i<num.size(); i++){
            int n=num[i];
            s.insert(1);
            s.insert(n);
            for(int j=2; j*j<=n; j++){
                if(n%j==0){
                    s.insert(j);
                    s.insert(n/j);
                }
            }

            if(s.size()==4)sum+=accumulate(s.begin(), s.end(), 0LL);
            s.clear();

        }

        return sum;
    }
};