class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        stack<int>a;
        stack<int>b;
        for(int i=n-1;i>=0;--i){
            a.push(popped[i]);
        }
        for(int i=0;i<n;++i){
            b.push(pushed[i]);
            while(!b.empty() && b.top()==a.top()){
                b.pop();
                a.pop();
            }
        }
        return b.empty();
    }
};