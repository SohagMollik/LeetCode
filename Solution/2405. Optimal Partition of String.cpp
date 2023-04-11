class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int ans=1;
        for(int i=0;i<s.size();++i){
            if(st.find(s[i]) != st.end()){
                ans++;
                st.clear();
            }
            st.insert(s[i]);
        }
        return ans;
    }
};
