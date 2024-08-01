class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int ans=0;
        for(int i=0;i<details.size();++i){
            
            string x = details[i].substr(11,2);
            int age = stoi(x);
            if(age>60)++ans;
            
        }
        
        return ans;
    }
};