class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        int n = profits.size();
        
        vector<pair<int,int>>project(n);
        for(int i=0; i<n; ++i){
            project[i] = {capital[i], profits[i]};
        }
        
        sort(project.begin(), project.end());
        
        priority_queue<int>maxProfit;
        
        int i=0;
        while(k--){
           
            while(i<n and project[i].first<=w){
                maxProfit.push(project[i].second);
                ++i;
            }
            
            if(maxProfit.empty())break; 
            else{
            w+=maxProfit.top();
            maxProfit.pop();
            }
        }
        
        return w;
    }
};