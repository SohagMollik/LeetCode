class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(1){
            size_t found = s.find(part);
            if (found == string::npos)break;
            else{
                s.erase(found, part.size());
            }
            
        }
        return s;
    }
};
