class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
      priority_queue <long long, vector<long long>, greater<long long>> p;
      
      for(auto it: nums){
        p.push(it);
      }
      
      int ans=0;
      while(p.size()>=2 and p.top()<k){
        long long x=p.top();
        p.pop();
        long long y=p.top();
        p.pop();
        long long add = min(x,y)*2 + max(x,y);
        p.push(add);
        ans++;
      }
      
      return ans;
    }
};