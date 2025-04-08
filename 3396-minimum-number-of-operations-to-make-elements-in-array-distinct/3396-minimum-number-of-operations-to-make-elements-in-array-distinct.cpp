class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       set<int>s;
       int n = nums.size();

       for(int i=n-1; i>=0; i--){
        auto it = s.find(nums[i]);
        if(it==s.end()){
            s.insert(nums[i]);
        }
        else{
            break;
        }

       }

       int res = n - s.size();
       int result = (res%3==0) ? res/3 : (res/3) + 1;

       return result; 
    }
};