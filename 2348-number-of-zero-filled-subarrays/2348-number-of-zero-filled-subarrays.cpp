class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
         
        long long int count=0, sum=0;

        for(int i=0; i<nums.size(); ){
            if(i<nums.size() && nums[i]==0){
                while(i<nums.size() && nums[i]==0 ){
                    count++;
                    i++;
                }
            }

            else{
                if(count>0){
                sum+=(count*(count+1))/2;
                count=0;
                }
                i++;
            }
        }

        if(count>0)sum+=(count*(count+1))/2;

        return sum;
    }
};