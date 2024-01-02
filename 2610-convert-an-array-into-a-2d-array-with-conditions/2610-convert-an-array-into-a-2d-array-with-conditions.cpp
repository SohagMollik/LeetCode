class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        
        unordered_set<int>s;
        for(int i=0;i<n;++i){
            if(nums[i] != -1){
            s.insert(nums[i]);
            nums[i]=-1;
            for(int j=0;j<n;++j){
                if(nums[j] != -1){
                    if(s.find(nums[j]) == s.end()){
                        s.insert(nums[j]);
                        nums[j]=-1;
                    }
                }
             }
                
          }
        
     if(s.size()!=0){
        vector<int>v(s.begin(),s.end());
        ans.push_back(v);
        s.clear();
        v.clear();
         }
            
        }
        
        return ans;
    }
};