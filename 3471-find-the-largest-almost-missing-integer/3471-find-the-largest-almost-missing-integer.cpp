class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>mp;
        int n=nums.size();
        for(auto x: nums){
            mp[x]++;
        }
        if(n==k)return *max_element(nums.begin(),nums.end());
        else if(k==1){
            int mx_element=-1;
            for(auto x: nums){
                if(mp[x]==1 and x>mx_element){
                    mx_element=x;
                }
            }

            return mx_element;
        }

        else if(nums[0]==nums[n-1])return -1;
        else if(mp[nums[0]]==1 and mp[nums[n-1]]==1) return max(nums[0],nums[n-1]);
        else if(mp[nums[0]]==1 and mp[nums[n-1]]>1)return nums[0];
        else if(mp[nums[0]]>1 and mp[nums[n-1]]==1)return nums[n-1];
        else return -1;
    }
};