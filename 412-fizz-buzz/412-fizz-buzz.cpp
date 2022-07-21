class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        vector<int>v;
        for(int i=0;i<n;++i){
            v.push_back(i+1);
        }
        
        for(int i=0;i<n;++i){
            if(v[i]%3==0 && v[i]%5==0)s.push_back("FizzBuzz");
            else if(v[i]%3==0)s.push_back("Fizz");
            else if(v[i]%5==0)s.push_back("Buzz");
            else if(v[i]==i+1)
            {
                string st=to_string(i+1);
                s.push_back(st);
            }
        }
        return s;
    }
};