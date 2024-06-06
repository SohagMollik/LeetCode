class Solution {
public:
    
    bool solve(vector<int>& hand, int groupSize, int i, int n)
    {
        int next=hand[i]+1;
        hand[i]=-1;
        int count=1;
        ++i;
        
        while(i<n && count<groupSize){
            
            if(hand[i]==next){
                next=hand[i]+1;
                hand[i]=-1;
                ++count;
            }
            
            ++i;
        }
        
        return count==groupSize;
    }
    
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        int n=hand.size();
        
        if(n % groupSize != 0) return false;
        
        sort(hand.begin(), hand.end());
        
        for(int k=0; k<n; ++k){
            
            if(hand[k]>=0){
                if(!solve(hand, groupSize, k, n)) return false;
            }
        }
        
        return true;
    }
};