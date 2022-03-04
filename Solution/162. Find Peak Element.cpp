class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i =max_element(nums.begin(),nums.end())-nums.begin();
        return i;
    }
};
