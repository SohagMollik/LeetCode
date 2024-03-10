class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        sort(capacity.begin(), capacity.end(),greater<int>());
        
        int sum=0;
        for(int i=0;i<apple.size();++i){
            sum+=apple[i];
        }
        
        int cnt=0;
        for(int i=0;i<capacity.size();++i){
            if(sum<=capacity[i]){
                cnt++;
                break;
            }
            else{
                cnt++;
                sum-=capacity[i];
            }
        }
        
        return cnt;
    }
};