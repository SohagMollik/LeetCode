class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0,total_cost=0;
        int ans=0,cur_gas=0;
        for(int i=0;i<gas.size();++i){
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_cost>total_gas)return -1;
        
            for(int i=0;i<gas.size();++i){
                cur_gas+=(gas[i]-cost[i]);
                if(cur_gas<0){
                    ans=i+1;
                    cur_gas=0;
                }
            }
            return ans;
        
    }
};