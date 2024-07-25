class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       
        map<int,int>mp;
        for(auto &it: nums){
            mp[it]++;
        }
        
        vector<int>vec;
        
        for(auto &it: mp){
            int loop=it.second;
            if(loop>1){
            int x=it.first;
            while(loop--){
                vec.push_back(x);
            }
          }
            
           else{
                int x=it.first;
                vec.push_back(x);
            }
        }
        
        return vec;
    }
};