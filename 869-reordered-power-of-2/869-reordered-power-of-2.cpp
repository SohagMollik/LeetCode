class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string st=to_string(n);
        sort(st.begin(),st.end());
        vector<string>v;
        for(int i=0;i<=30;i++){
            int p=pow(2,i);
            v.push_back(to_string(p));
        }
        for(int i=0;i<v.size();i++){
            sort(v[i].begin(),v[i].end());
        }
        bool ans=false;
        for(int i=0;i<v.size();i++){
            if(v[i]==st){
                ans=true;
                break;
            }
        }
        if(ans==false)return false;
        else return true;
    }
};