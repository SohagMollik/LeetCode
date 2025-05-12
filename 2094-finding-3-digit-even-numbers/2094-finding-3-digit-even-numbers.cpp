class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        vector<int>freq(10,0);
        for(int i=0;i<digits.size();i++){
            freq[digits[i]]++;
        }

        vector<int>ans;
        for(int k=100; k<=998; k+=2){
            int a = k/100;
            int b= (k/10)%10;
            int c= k%10;

            vector<int>temp_freq(10,0);

            temp_freq[a]++;
            temp_freq[b]++;
            temp_freq[c]++;

             if(freq[a]>=temp_freq[a] && freq[b]>=temp_freq[b] && freq[c]>=temp_freq[c])ans.push_back(k);
            
        }

        return ans;
    }
};