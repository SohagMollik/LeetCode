class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int sz=arr.size();
        int low=0,high=sz-1;
        int mid,ans;
        while(low<=high){
            mid=low+(high-low)/2;
            if((arr[mid]>arr[mid-1]) and(arr[mid]>arr[mid+1])){
                ans=mid;
                break;
            }
            else if(arr[mid-1]>arr[mid]){
                high=mid;
                
            }
            else{
                low=mid;
            }
        }
        return ans;
    }
};