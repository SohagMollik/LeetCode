class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

      int n=nums.size();

      sort(nums.begin(),nums.end());
      vector<vector<int>>ans;

      for(int i=0;i<n;i++){
        if(i==0 or nums[i]!=nums[i-1]){
        int j=i+1, k=n-1;
        int tar = 0-nums[i];
        while(j<k){
            if(nums[j]+nums[k]==tar){
                ans.push_back({nums[i], nums[j], nums[k]});
                while(j<k && nums[j]==nums[j+1]){j++;}
                while(j<k && nums[k]==nums[k-1]){k--;}
                j++;
                k--;   
            }
            else if(nums[j]+nums[k]<tar){
                j++;
            }
            else{
                k--;
            }
        }
        }
      }

      return ans;  
    }
};