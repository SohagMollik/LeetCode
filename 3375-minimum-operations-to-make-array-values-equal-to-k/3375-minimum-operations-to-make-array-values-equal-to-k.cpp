class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        map<int,int>mp;

        for(int i=0; i<nums.size(); ++i){
            mp[nums[i]]++;
        }

        int sz = mp.size();

        auto f = mp.find(k); 

        if(f!=mp.end())sz--;
        auto x = mp.begin();

         if(x->first < k) return -1;
         else return sz;

    }
};