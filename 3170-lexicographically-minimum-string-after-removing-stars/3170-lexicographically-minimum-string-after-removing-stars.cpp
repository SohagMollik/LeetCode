class Solution {
public:
    string clearStars(string s) {

     priority_queue<char, vector<char>, greater<char>>minHeap; 
     unordered_map<char, vector<int>>index;

     for(int i=0; i<s.size(); i++){

        if(s[i]=='*'){
            char ch = minHeap.top();
            minHeap.pop();
            int last = index[ch].back();
            s[last]='#';
            index[ch].pop_back();
        }

        else{
            minHeap.push(s[i]);
            index[s[i]].push_back(i);
        }
     }

     string result="";
     for(int k=0; k<s.size(); k++){
        if(s[k]!='#' and s[k]!='*')result+=s[k];
     }

     return result;
    }
};