class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int mx = -1;

    map<int, vector<int>> v;

    for (int i = 0; i < s.size(); ++i) {
        v[s[i]].push_back(i);
    }

    for (auto& entry : v) {
        vector<int>& indices = entry.second;
        if (indices.size() > 1) {
            int x = abs(indices[indices.size() - 1] - indices[0]  - 1);
            mx = max(mx, x);
        }
    }

    return mx;
        
    }
};