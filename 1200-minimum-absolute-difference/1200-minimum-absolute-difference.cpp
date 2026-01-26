class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(), arr.end());
       vector<vector<int>>ans;
       int diff=abs(arr[1]-arr[0]);
       for(int i=1;i<arr.size();i++){
        int x=abs(arr[i]-arr[i-1]);
        if(x==diff){
            ans.push_back({arr[i-1], arr[i]});
        }
       }

       return ans; 
    }
};