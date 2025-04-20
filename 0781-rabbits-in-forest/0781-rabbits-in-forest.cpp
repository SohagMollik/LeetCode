class Solution {
public:
    int numRabbits(vector<int>& answers) {
       map<int,int>mp;

       for(int i=0; i<answers.size(); i++){
        mp[answers[i]]++;
       } 

      int group,res,total_rabbits=0;
       for(auto it: mp){
        group=(it.first + 1);
        res = ceil((double)it.second/(double)group);
        total_rabbits+=(res*group);
       }

       return total_rabbits;
    }
};