class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       
        priority_queue<int>pq;
        long int sum=0;
        
        for(auto it: gifts){
            pq.push(it);
        }
        
        while(k--){
            
            int res=pq.top();
            res=sqrt(res);
            pq.pop();
            pq.push(res);
        }
        
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        
        return sum;
    }
};