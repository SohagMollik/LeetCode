class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int>v(2,0);
        
        for(int i=0;i<students.size();++i){
            v[students[i]]++;
        }
        
        int rem=sandwiches.size();
        
        for(int i=0;i<sandwiches.size();++i){
            if(v[sandwiches[i]]==0)break;
            if(rem==0)break;
            
            v[sandwiches[i]]--;
            rem--;
        }
        
        return rem;
    }
};