class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(), people.end());
        int low=0, high=people.size()-1, ans=0;
        
        while(low<=high){
            if(people[low] + people[high] <= limit){
                ++ans;
                ++low;
                --high;
            }
            
            else if(people[low]>=limit){
                ++ans;
                ++low;
            }
            else if(people[high]>=limit){
                ++ans;
                --high;
            }
            else{
                ++ans;
                --high;
            }
            
        }
        
        return ans;
    }
};