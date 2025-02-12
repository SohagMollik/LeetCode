class Solution {
public:
    int maximumSum(vector<int>& nums) {
       map<int,priority_queue<int>>mp;
       
       for(int i=0; i<nums.size(); i++){
        int res=nums[i]; int sum=0; int temp=nums[i];
        while(res!=0){
            sum+=(res%10);
            res/=10;
        }
        mp[sum].push(temp);
       }

       int mx=-1;
       for(auto &it: mp){
           int result=0;
            //int key=it.first;
            priority_queue<int>pq=it.second;
            if(pq.size()>1){
                result+=pq.top();
                pq.pop();
                result+=pq.top();
            }
            mx=max(mx,result);
       }

     
      if(mx==0) return -1;
      else return mx;

    }
};