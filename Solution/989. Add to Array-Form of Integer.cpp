class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string ans="";
        for(auto &z: num){
            ans+=to_string(z);
        }
        string temp=to_string(k);
        int len1=ans.size();
        int len2=temp.size();

        int i=0,carry=0;
        vector<int>vec;
        while(i<len1 || i<len2 || carry!=0){
            int x,y;
            if(i<len1){
             x=ans[len1-i-1]-'0';
            }
            else {
                x=0;
            }
            if(i<len2){
             y=temp[len2-i-1]-'0';
            }
            else{
                y=0;
            }
            int sum=0;
            sum=(x+y+carry)%10;
            vec.push_back(sum);
            carry=(x+y+carry)/10;
            i++;
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};
