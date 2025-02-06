class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int product=nums[i]*nums[j];
                mp[product]++;
            }
        }

        int result=0;
        for(auto pic: mp){
            int x=pic.second;
            if(x>1){
                result+=(x*(x-1)/2)*8;
            }
        }

        return result;
    }
};