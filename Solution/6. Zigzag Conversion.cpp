class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int row=0;
        bool down;
        string ans[numRows];
        for(int i=0;i<s.size();++i){
            ans[row].push_back(s[i]);
            if(row==numRows-1)down=false;
            if(row==0) down=true;
            if(down==true)row++;
            else row--;
        }
        string zigzag="";
        for(int i=0;i<numRows;++i){
            zigzag+=ans[i];
        }
        return zigzag;
    }
};