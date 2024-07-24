class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapp, vector<int>& nums) {
        
        vector<pair<int,int>>vec;
        int sz=nums.size();
        
        for(int i=0; i<nums.size(); ++i){
            
            int n=nums[i];
            string st = to_string(n);
            string res="";
            
            for(int k=0; k<st.size(); ++k){
                int pos = st[k] - '0';
                string y = to_string(mapp[pos]);
                res+=y;
            }
            
            int x = stoi(res);
            
            vec.push_back({x, n});
    
        }
        
       stable_sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
       });
        
        vector<int>ans;
        
        for(int i=0; i<sz; ++i){
            ans.push_back(vec[i].second);
        }
        
        return ans;
    }
};