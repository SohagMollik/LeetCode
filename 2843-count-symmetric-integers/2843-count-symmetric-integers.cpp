class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        if(low>=1 and high<=10){
           return 0;
        }
        else if(low>100 and high<=1000){
            return 0;
        }
        
        else{
            int ans=0;
            for(int i = low; i<=high; ++i){
                string st = to_string(i);
                int x=0,y=0;
                if(st.size() % 2==0){
                    for(int j=0; j<st.size()/2; ++j){
                         x+=(st[j]-'0');
                    }
                    
                    for(int k=st.size()/2; k<st.size(); ++k){
                         y+=(st[k]-'0');
                    }
                }
                if(x!=0 && y!=0 && x==y)++ans;
            }
            
            return ans;
        }

    }
};