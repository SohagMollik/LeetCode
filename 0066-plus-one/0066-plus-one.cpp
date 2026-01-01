class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     string num1="";
     string num2="1";
     for(int i=0; i<digits.size(); i++){
          num1+= to_string(digits[i]);
     }

    int carry=0,sum;
    string result="";
     for(int i=num1.size()-1, j=num2.size()-1; i>=0 or j>=0 or carry; i--, j--){
        sum=carry;
        if(i>=0)sum+=num1[i]-'0';
        if(j>=0)sum+=num2[j]-'0';
        carry=sum/10;
        result+=to_string(sum%10);
     }

     digits.clear();
     reverse(result.begin(),result.end());
     for(int k=0; k<result.size(); k++){
        int num= result[k]-'0';
        digits.push_back(num);
     }

     return digits;


    }
};