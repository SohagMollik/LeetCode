class Solution {
public:
    int minimumRounds(vector<int>& task) {
        map<int,int>mp;
        for(int i=0;i<task.size();++i){
            mp[task[i]]++;
        }
        int ans=0;
        for(auto &x: mp){
            if(x.second==1){
                return -1;
                break;
            }
            else{
            
                int div=x.second/3;
                int mod=x.second%3;
                if(mod==0){
                    ans+=div;
                }
                else if(mod==2){
                    ans+=(div+1);
                }
                else{
                    ans+=((div-1)+2);
                }

            }
        }
        return ans;
    }
};