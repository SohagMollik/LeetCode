class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)return 0;
        else{
        set<int>s;
        s.insert(1);
        for(int i=2;i*i<=num;++i){
            if(num%i==0){
                s.insert(i);
                s.insert(num/i);  
            }
        }
        int ans=0;
        for(auto &x: s){
            ans+=x;
        }
        if(ans==num) return 1;
        else return 0;
        }
    }
};