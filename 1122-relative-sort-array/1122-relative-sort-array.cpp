class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int n=arr2.size();
        
        vector<int>ans,res;
        
        for(int i=0;i<n;++i){
            
            int x=count(arr1.begin(), arr1.end(), arr2[i]);
            replace(arr1.begin(), arr1.end(),arr2[i], -1);
            
            while(x--){
                ans.push_back(arr2[i]);
            }
        }
        
        for(int i=0;i<arr1.size();++i){
            if(arr1[i]!=-1)res.push_back(arr1[i]);
        }
        
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size();++i){
            ans.push_back(res[i]);
        }
        
        
      return ans;
    }
};