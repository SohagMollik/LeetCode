class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int ok=0;
        if(arr.size()>3){
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1; j<arr.size()-1; j++){
                for(int k=j+1; k<arr.size(); k++){
                    if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0){
                        ok=1;
                        break;
                    }
                }
            }
        }
      }

        if(arr.size()<3)return 0;
        else if(arr[0]%2!=0 && arr[1]%2!=0 && arr[2]%2!=0)return 1;
        else if(ok==1)return 1;
        else return 0;
    }
};