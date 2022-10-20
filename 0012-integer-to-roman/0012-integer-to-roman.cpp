class Solution {
public:
    string intToRoman(int num) {
        string ans="";
            int a=num / 1000;
            for(int i=0;i<a;++i){
                ans+="M";
            }
            int mod1=num % 1000;
            int b=mod1 / 900;
            for(int i=0;i<b;++i){
                ans+="CM";
            }
            int mod2=mod1 % 900;
            int c=mod2 / 500;
            for(int i=0;i<c;++i){
                ans+="D";
            }
            int mod3=mod2 % 500;
            int d=mod3 / 400;
            for(int i=0;i<d;++i){
                ans+="CD";
            }
            int mod4=mod3 % 400;
            int e=mod4 / 100;
            for(int i=0;i<e;++i){
                ans+="C";
            }
            int mod5=mod4 % 100;
            int f=mod5 / 90;
            for(int i=0;i<f;++i){
                ans+="XC";
            }
            int mod6=mod5 % 90;
            int g=mod6 / 50;
            for(int i=0;i<g;++i){
                ans+="L";
            }
            int mod7=mod6 % 50;
            int h=mod7 / 40;
            for(int i=0;i<h;++i){
                ans+="XL";
            }
            int mod8=mod7 % 40;
            int j=mod8 / 10;
            for(int i=0;i<j;++i){
                ans+="X";
            }
            int mod9=mod8 % 10;
            int k=mod9 / 9;
            for(int i=0;i<k;++i){
                ans+="IX";
            }
            int mod10 = mod9 % 9;
            int l=mod10 / 5;
            for(int i=0;i<l;++i){
                ans+="V";
            }
            int mod11 = mod10 % 5;
            int m= mod11 / 4;
            for(int i=0;i<m;++i){
                ans+="IV";
            }
            int mod12 = mod11 % 4;
            int n= mod12 / 3;
            for(int i=0;i<n;++i){
                ans+="III";
            }
            int mod13 = mod12 % 3;
            int o= mod13 / 2;
            for(int i=0;i<o;++i){
                ans+="II";
            }
            int mod14 = mod13 % 2;
            int p = mod14 / 1;
            for(int i=0;i<p;++i){
                ans+="I";
            }
        
        return ans;
    }
};