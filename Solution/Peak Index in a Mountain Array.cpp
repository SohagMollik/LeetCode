class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int it=max_element(arr.begin(),arr.end())-arr.begin();
        return it;
    }

};
