class Solution {
public:
    int sumCounts(vector<int>& nums) {
        set<int>s;
        //int sum=s.size()*s.size();
        int sum=1;
        for(int i=0; i<nums.size()-1; i++){
            s.insert(nums[i]);
            sum+=1;
            for(int j=i+1; j<nums.size(); j++){
                s.insert(nums[j]);
                sum+=(s.size()*s.size());
            }
            s.clear();
        }

        return sum;
    }
};