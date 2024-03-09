class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>mp;
        int a,b;
        for(int i=0;i<nums.size();++i){
           
            int x=target - nums[i];
            
            if(mp.find(x)!=mp.end()){
                a=mp[x];
                b=i;
                break;
            }
            
              else{
                  //nums[i]=abs(nums[i]);
                    mp[nums[i]]=i;
               }
            
           }
        
        return {a, b};
    }
};