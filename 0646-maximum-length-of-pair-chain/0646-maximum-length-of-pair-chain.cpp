
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
       vector< pair <int,int> > vect;
        for(int i = 0; i < pairs.size(); ++i){
            for(int j=0;j<1;++j){
            vect.push_back( { pairs[i][j+1], pairs[i][j]} );
           }
        }
        
        sort(vect.begin(), vect.end());
        
        int curr = INT_MIN;
        int ans = 0;
        
        for(int i = 0; i < vect.size(); ++i){
            if(curr < vect[i].second){
                curr = vect[i].first;
                ans++;
            }
        }
       
        
        return ans;
    }
};