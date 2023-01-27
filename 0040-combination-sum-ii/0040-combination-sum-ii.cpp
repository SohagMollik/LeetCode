class Solution {
    
    void combination(int idx, int target,vector<int>&candidate,vector<int>&temp,vector<vector<int>>&ans){
        int n=candidate.size();
        if(target==0) {
            ans.push_back(temp);  
            return ;
        }
        
        for(int i=idx;i<n;++i){
            if(i>idx && candidate[i]==candidate[i-1])continue;
            if(target<candidate[i])break;
                temp.push_back(candidate[i]);
                combination(i+1,target-candidate[i],candidate,temp,ans);
                temp.pop_back();
            
        
        }
        
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidate, int target) {
        sort(candidate.begin(),candidate.end());
        vector<vector<int>>ans;
        vector<int>temp;
        combination(0,target,candidate,temp,ans);
        
        return ans;
    }
};