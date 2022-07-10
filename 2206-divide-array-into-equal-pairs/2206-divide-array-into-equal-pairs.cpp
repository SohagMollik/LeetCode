class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        bool ans=true; 
        for(it=mp.begin();it!=mp.end();it++){
            int y=it->second;
            if(y%2!=0)ans=false;
        }
        if(ans==false)return 0;
        else return 1;
    }
};