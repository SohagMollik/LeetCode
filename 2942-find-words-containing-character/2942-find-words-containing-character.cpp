class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

       vector<int>index;

       for(int i=0; i<words.size(); i++){
        string res = words[i];
        if(res.find(x) != string::npos)index.push_back(i);
       } 

       return index;
    }
};