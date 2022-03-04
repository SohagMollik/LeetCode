class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x=abs(arr[1]-arr[0]);
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i-1]-arr[i])!=x){
                return false;
                break;
            }
        }
        return true;
    }
};
