class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
            set<int>st;
            sort(skill.begin(),skill.end());
            int i=0;
            int j=skill.size()-1;
            long long int ans=0;
            while(i<j){
                long long int y=(long long int)skill[i]*(long long int)skill[j];
                 ans+=y;
                int x=skill[i]+skill[j];
                st.insert(x);
                i++;
                j--;
            }
        if(st.size()!=1)return -1;
        else return ans;
        
    }
};