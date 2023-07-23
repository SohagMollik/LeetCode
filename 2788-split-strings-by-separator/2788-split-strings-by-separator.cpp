class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char sep) {
        string st=""; 
        vector<string>ans;
        for(int i=0;i<words.size();++i)
        {
            
           for(int j=0;j<words[i].size();++j){
                
                if(words[i][j]!= sep)
                    {
                      st.push_back(words[i][j]); 
                    }
         
               
               else{
                   if(st.size()!=0){
                   ans.push_back(st);
                   st.erase();
                   continue;
                   }
               }
           }
               
     if(st.size()!=0){
     ans.push_back(st);
     st.erase();
     }   
 }
        
            
        return ans;
    }
};