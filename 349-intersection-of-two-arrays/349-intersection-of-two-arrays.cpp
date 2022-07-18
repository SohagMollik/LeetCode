class Solution {
public:
    vector<int>intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        for(int i=0;i<nums1.size();++i){
            s.insert(nums1[i]);
        }
        vector<int>v(0);
            for(int j=0;j<nums2.size();++j){
                if(s.find(nums2[j])!=s.end()){
                    v.push_back(nums2[j]);
                    s.erase(nums2[j]);
                }
            
        }

        return v;
    }
};