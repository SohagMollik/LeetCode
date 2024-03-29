class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        int c;
        for(int i=0;i<spells.size();++i){
            int low=0;
            int high=potions.size()-1;
            c=potions.size();
            while(low<=high){
                int mid=low + (high-low)/2;
                long long int x=(1LL)*potions[mid]*(1LL)*spells[i];

                if(x>=success){
                    c=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            ans.push_back(potions.size()-c);
        }
        return ans;
    }
};
