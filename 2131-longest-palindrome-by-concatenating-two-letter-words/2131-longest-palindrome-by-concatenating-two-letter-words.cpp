class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp;

        int ans=0, ok=0;
        for(int i=0; i<words.size(); i++){
            mp[words[i]]++;
        }

        for(auto& [word, freq]: mp){
            string rev = word;
            reverse(rev.begin(), rev.end());

            if(word == rev){
                ans+=(freq/2)*4;
                if(freq%2!=0)ok=1;
            }
            else if(word < rev){
                ans+=min(freq, mp[rev])*4;
            }
        }

        if(ok==1)ans+=2;

        return ans;
    }
};