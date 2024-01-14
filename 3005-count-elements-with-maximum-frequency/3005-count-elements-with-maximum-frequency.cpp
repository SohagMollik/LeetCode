class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        
        vector<int>v;
        for(auto x: mp){
            int y=x.second;
            v.push_back(y);
        }
        
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=1;i<v.size();++i){
            if(v[i-1]==v[i]){
                sum+=v[i-1];
            }
            else{
                sum+=v[i-1];
                break;
            }
        }
        if(v[0]==v[v.size()-1]) {sum+=v[v.size()-1];}
        
        return sum;
    }
};