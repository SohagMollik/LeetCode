class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        
        
        long int sum=0, mn=0, mx=0;

        for(int i=0; i<differences.size(); i++){
            sum+=differences[i];
            mn = min(mn,sum);
            mx = max(mx,sum);
        }

        return max(0, ((upper-mx)-(lower-mn))+1);
    }
};