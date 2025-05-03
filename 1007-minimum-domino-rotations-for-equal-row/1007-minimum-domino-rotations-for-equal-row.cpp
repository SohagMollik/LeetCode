class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
     map<int,int>top,bottom;

     for(int i=0; i<tops.size();i++){
        top[tops[i]]++;
        bottom[bottoms[i]]++;
     }   

     int a=INT_MIN, b, c=INT_MIN, d;
     for(auto it: top){
        int res = it.second;
        int temp = it.first;
        if(res>a){
            b=temp;
            a=res;
        }
     }

     for(auto it: bottom){
        int res = it.second;
        int temp = it.first;
        if(res>c){
            d=temp;
            c=res;
        }
     }

     int ans1=0, ok1=0, ans2=0, ok2=0;

     
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=b){
                if(bottoms[i]==b){
                    ans1++;
                    }
                else {ok1=1;break;}
            }
        }
     
     
        for(int i=0;i<bottoms.size();i++){
            if(bottoms[i]!=d){
                if(tops[i]==d){
                    ans2++;
                    }
                else {ok2=1;break;}
            }
        }
     

     if(ok1==1 && ok2==1) return -1;
     else {
        if(ok1==1)return ans2;
        else return ans1;
     }
    }
};