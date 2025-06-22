class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

       vector<string>ans;

       int len = s.size();
       if(len % k != 0) {
         int mod = len % k;
         for(int i=0; i<(k-mod); i++){
            s+=fill;
         }
       }
        int temp = k, it;
        string res="";
        for( int i=0; i<s.size(); i+=temp){
            it=i;
            while(k--){
                res+=s[it];
                it++;
            }

            ans.push_back(res);
            res.clear();
            k=temp;
        }

        return ans;
    }
};