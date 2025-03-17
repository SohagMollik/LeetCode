class Solution {
public:
int check[1001];
    bool divideArray(vector<int>& nums) {

       for(int i=0;i<nums.size();++i){
        check[nums[i]]++;
       }

    int ok=0;
        for(int i=0;i<nums.size();++i){
        if(check[nums[i]] % 2 !=0){
            ok=1;
            break;
        }
       }

       if(ok!=1)return 1;
       else return 0;
       
    }
};