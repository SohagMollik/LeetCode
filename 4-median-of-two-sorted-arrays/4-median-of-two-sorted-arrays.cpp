class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(0);
        for(int i=0;i<nums1.size();++i){
            v.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();++i){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        if(n&1){
            int idx=n/2;
            return v[idx];
        }
        else{
            int idx=n/2;
            return (double)(v[idx-1]+v[idx])/2;
        }
    }
};