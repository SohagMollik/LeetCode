class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int i=0;i<32;++i){
            int x=((a>>i) & 1);
            int y=((b>>i) & 1);
            int z=((c>>i) & 1);
            if(z==1 && (x==1 && y==1))ans+=0;
            else if(z==1 && (x==1 && y==0))ans+=0;
            else if(z==1 && (x==0 && y==1))ans+=0;
            else if(z==1 && (x==0 && y==0))ans+=1;
            else if(z==0 && (x==1 && y==1))ans+=2;
            else if(z==0 && (x==0 && y==1))ans+=1;
            else if(z==0 && (x==1 && y==0))ans+=1;
        }
        return ans;
    }
};