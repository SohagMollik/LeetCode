class Solution {
public:
    string firstPalindrome(vector<string>& v) {
        string st={0};
        bool ans=false;
        for(int i=0;i<v.size();++i){
            string dt=v[i];
            reverse(v[i].begin(),v[i].end());
            if(dt==v[i]){
                ans=true;
                st=dt;
                break;
            }
            
        }
        if(ans==true)return st;
        else return "";
    }
};