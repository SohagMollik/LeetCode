class Solution {
    
    void permutation(vector<int>& nums,vector<int>& v,int mark[],vector<vector<int>>&ans){
       if(v.size()==nums.size()) {
           ans.push_back(v);
           return ;
       }
        for(int i=0;i<nums.size();++i){
            if(!mark[i]){
                v.push_back(nums[i]);
                mark[i]=1;
                permutation(nums,v,mark,ans);
                mark[i]=0;
                v.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
       vector<int>v;
        int mark[nums.size()];
        for(int i=0;i<nums.size();++i)mark[i]=0;
        permutation(nums,v,mark,ans);
        
        return ans;
    }
};