class Solution {
public:
    int smallestIndex(vector<int>& nums) {
       int digitSum=0, n=nums.size(), ok=-1;
       for(int i=0; i<n; i++){
        int x=nums[i];
        while(x!=0){
            digitSum+=(x%10);
            x/=10;
        }
        if(digitSum==i){
            ok=i;
            break;
        }

        digitSum=0;
       }

       return ok; 
    }
};