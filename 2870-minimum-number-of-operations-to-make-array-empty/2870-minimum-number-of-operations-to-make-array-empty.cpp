class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        
        int ans=0;
        bool ok=true;
        
        for(auto pick: mp){
            int curr=pick.second;
            
            if(curr==1)ok=false;
            else if(curr%3==0){
                ans+=(curr/3);
            }
            
            else if(curr%3!=0){
                int mod=curr%3;
                if(mod==2)ans+=((curr/3)+1);
                else ans+=((curr-4)/3)+2;
                
            }
        }
        
        if(ok==false)return -1;
        else return ans;
    }
};