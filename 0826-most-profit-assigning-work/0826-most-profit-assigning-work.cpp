class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int n1 = worker.size(), n2 = difficulty.size();
        
        int ans=0;
        
        for(int i=0; i<n1; i++){
            
             int maxProfit=0;
            
            for(int j=0; j<n2; j++){
                
                if(difficulty[j]<=worker[i]){
                    maxProfit = max(maxProfit, profit[j]);
                }
                
            }  
            
            ans+=maxProfit;
        }
        
        return ans;
    }
};