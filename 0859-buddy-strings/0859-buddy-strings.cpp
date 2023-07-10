class Solution {
public:
    bool buddyStrings(string s, string goal) {
    map<int,int>mp;
    vector<int>v;
    int len1=s.size();
    int len2=goal.size();
if(len1 != len2) return false;
    else{
    if(s==goal){
       int ok=0;
       for(int i=0;i<len1;++i){
           mp[s[i]]++;
       }
        for(auto &x: mp){
            if(x.second>=2){
                ok=1;
                break;
            }
        }
        if(ok==1)return true;
        else return false;
    }

    else{
    int cnt=0;
    for(int i=0;i<len1;++i)
        {
        if(s[i]!=goal[i]){
            v.push_back(i);
            ++cnt;
        }
    }
        if(cnt==2){
         swap(s[v[0]],s[v[1]]);
         if(s==goal) return true;
         else return false;
        }
        else return false;
        }
        }
    }
};