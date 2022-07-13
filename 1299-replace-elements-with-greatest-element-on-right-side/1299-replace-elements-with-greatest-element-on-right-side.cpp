class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>v(0);
        int mx;
        for(int i=0;i<arr.size()-1;++i){
            mx=0;
            for(int j=i+1;j<arr.size();++j){
                if(arr[j]>=mx)mx=arr[j];
            }
            v.push_back(mx);
        }
        v.push_back(-1);
        return v;
    }
};