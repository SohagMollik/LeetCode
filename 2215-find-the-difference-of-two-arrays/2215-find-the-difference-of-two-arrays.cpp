class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s,s1;
        set<int>unique;
        for(int i=0;i<nums2.size();++i){
            s.insert(nums2[i]);
        }
         for(int i=0;i<nums1.size();++i){
            s1.insert(nums1[i]);
        }
        vector<int>v(0);
        vector<vector<int>>ans;
         for(int i=0;i<nums1.size();++i){
             if(s.find(nums1[i])==s.end()){
                 unique.insert(nums1[i]);
             }
         }
        for(auto &x: unique){
            v.push_back(x); 
        }
        ans.push_back(v);
        v.clear();
        unique.clear();
       for(int i=0;i<nums2.size();++i){
             if(s1.find(nums2[i])==s.end()){
                 unique.insert(nums2[i]);
             }
         }
        for(auto &y: unique){
            v.push_back(y); 
        }
        ans.push_back(v);
        return ans;
    }
};