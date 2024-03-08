class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        map<int,int>mp;
        for(auto pic: nums){
            mp[pic]++;
        }
        
        int mx=0;
        for(auto pic: mp){
            int x=pic.second;
            mx=max(mx,x);
        }
        
        int sum=0;
        for(auto pic: mp){
            int x=pic.second;
            if(x==mx)sum+=x;
        }
        
        return sum;
    }
};