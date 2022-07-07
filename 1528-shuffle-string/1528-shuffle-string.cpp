class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int sz=s.size();
        string st(sz,'0');
        for(int i=0;i<s.size();++i)
        {
            st[indices[i]]=s[i];
        }
        return st;
    }
};