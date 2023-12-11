class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int ans=0,mx=1,result=0;
        for(int i=1;i<arr.size();++i){
            
            if(arr[i-1]!=arr[i]){
                if(ans<=mx){
                    ans=mx;
                    result=arr[i-1];
                    mx=1;
                }
            }
            else{
                ++mx;
            }
        }
        
         if(ans<=mx){
                ans=mx;
                result=arr[arr.size()-1];
                mx=1;
                }
        
        return result;
    }
};