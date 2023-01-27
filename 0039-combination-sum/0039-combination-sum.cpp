class Solution {
    
    void combination(int idx,int target,vector<int>&candidate,vector<int>&temp,vector<vector<int>>&ans)
    {
        int n=candidate.size();
      if(idx==n){
          if(target==0){
          ans.push_back(temp);
          }
          return ;
      }  
        
      if(candidate[idx]<=target){     
        temp.push_back(candidate[idx]);
        combination(idx,target-candidate[idx],candidate,temp,ans);
        temp.pop_back();           
      }
      combination(idx+1,target,candidate,temp,ans);                
          
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidate, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        combination(0,target,candidate,temp,ans);
        
    
    return ans;
    }
};