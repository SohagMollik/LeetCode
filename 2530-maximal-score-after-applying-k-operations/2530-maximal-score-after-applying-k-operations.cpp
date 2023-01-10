class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto &z: nums){
            pq.push(z);
        }
        int long long sum=0;
        while(k--){ 
            sum+=pq.top();
            int x=((pq.top()+2)/3);
            pq.pop();
            pq.push(x);
        }
        return sum;
    }
};