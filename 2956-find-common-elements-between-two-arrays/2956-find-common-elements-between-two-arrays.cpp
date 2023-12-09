class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        int x=0,y=0;
        
        for(int i=0;i<nums1.size();++i){
            if(count(nums2.begin(), nums2.end(), nums1[i]) >=1)x++;
        }
        
        for(int i=0;i<nums2.size();++i){
            if(count(nums1.begin(), nums1.end(), nums2[i]) >=1)y++;
        }
        
        return {x, y};
    }
};