class Solution {
public:
    int maxDiff(int num) {

        string s = to_string(num);
        int a,b, index1;
        index1 = -1;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='9'){
                index1 = i;
                break;
            }
         }

         if(index1 != -1){
            char temp = s[index1];
            for(int i=index1; i<s.size(); i++){
                if(s[i]==temp)s[i]='9';
            }
         }

          a = stoi(s);

         string st = to_string(num);
         if(st[0]!='1'){
            char res = st[0];
            for(int i=0; i<st.size(); i++){
                if(st[i]==res)st[i]='1';
            }
         }

         else {
            int index2= -1;
            for(int i=1; i<st.size(); i++){
                if(st[i]!='1' and st[i]!='0'){
                    index2 = i;
                    break;
                }
            }

            if(index2!=-1){
            char x=st[index2];
            for(int i=index2; i<st.size(); i++){
                if(st[i]==x)st[i]='0';
              }
            }
         }

         b = stoi(st);

         return a-b;
       
        
    }
};