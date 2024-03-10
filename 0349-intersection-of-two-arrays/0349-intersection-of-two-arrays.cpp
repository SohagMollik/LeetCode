class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
       set<int>s(nums1.begin(), nums1.end());
       set<int>st(nums2.begin(), nums2.end());
        
        vector<int>v;
        for(auto pic: s){
          if(st.find(pic) != st.end()){
              v.push_back(pic);
          }
        }
        
        return v;
    }
};