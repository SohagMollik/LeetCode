class Solution {
public:
    int maxArea(vector<int>& h) {
        if(h.size()==2)return min(h[0],h[1]);
        else{
        vector<int>v;
        int i=0;
        int j=h.size()-1;
        while(i<j){
            int x=(min(h[i],h[j])*(abs(j-i)));
            v.push_back(x);
            if(h[i]==h[j]){
                i++;
                j--;
            }
            else if(h[i]>h[j]){
                j--;
            }
            else if(h[i]<h[j]){
                i++;
            }
        }
        int mx=*max_element(v.begin(),v.end());
        return mx;
        }
    }
};