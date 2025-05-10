class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {

       long int sum1=0, sum2=0, c=0, d=0;

       for(int i=0; i<nums1.size(); i++){
        sum1+=nums1[i];
        if(nums1[i]==0)c++;
       }

       for(int i=0; i<nums2.size(); i++){
        sum2+=nums2[i];
        if(nums2[i]==0)d++;
       }

       

        if(c==0 && d==0 && (sum1!=sum2))return -1;
       else if(c==0 && d!=0 && sum1!=sum2){
            if((abs(sum1-sum2)<d)or(sum1<sum2))return -1;
            else return sum1;
       }

        else if(c!=0 && d==0 && sum1!=sum2){
            if((abs(sum1-sum2)<c) or (sum1>sum2))return -1;
            else return sum2;
       }
       else return max(sum1+c, sum2+d);
    }
};