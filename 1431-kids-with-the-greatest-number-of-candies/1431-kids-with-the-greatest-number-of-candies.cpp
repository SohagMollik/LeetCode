class Solution {
public:
   vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=*max_element(candies.begin(),candies.end());
       vector<bool>b;
        for(int i=0;i<candies.size();++i){
           int total=candies[i]+ extraCandies;
            if(total>=mx)b.push_back(1);
            else b.push_back(0);
        }
       return b;
    }
};