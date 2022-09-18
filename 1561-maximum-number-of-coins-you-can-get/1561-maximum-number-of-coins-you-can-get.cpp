class Solution {
public:
    int maxCoins(vector<int>& pile) {
        sort(pile.begin(),pile.end(),greater<int>());
        int sz=pile.size()/3;
        int ans=0;
        for(int i=1;i<sz*2;i+=2){
           ans+=pile[i]; 
        }
        return ans;
    }
};