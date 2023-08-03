class Solution {
public:
    void fun(string digits,vector<string>&letter,string &temp,vector<string>&ans,int index){
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        
        string st=letter[digits[index]-'0'];
        for(int i=0;i<st.size();++i){
        
                temp.push_back(st[i]);
                fun(digits,letter,temp,ans,index+1);
                temp.pop_back();  
            
        }
    }
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty())return {};
        
         vector<string>letter{"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
         vector<string>ans;
         string temp="";
        
         fun(digits,letter,temp,ans,0);
        
        return ans;
    }
};