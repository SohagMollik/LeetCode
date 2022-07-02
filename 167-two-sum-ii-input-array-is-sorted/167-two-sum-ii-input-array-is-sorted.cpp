class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l,r;
        for(l=0,r=numbers.size()-1;l<numbers.size()&&r>=0; ){
            if(numbers[l]+numbers[r]==target)
                return {l+1,r+1};
            else if(numbers[l]+numbers[r]<target)l++;
                else r--;
        }
        return {-1,-1};
    }
};