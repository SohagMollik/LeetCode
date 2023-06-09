class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]>target)return letters[0];
        else if(letters[letters.size()-1] <= target)return letters[0];
        int low=0;
        int high=letters.size()-1;
        int mid;
        char ans;
        while(low<=high){
         mid=(high+low)/2;
         if(letters[mid]>target){
            ans=letters[mid];
            high=mid-1;
            }
         else  low=mid+1;
        }
        return ans;
    }
};

// Runtime: 15 ms, Beats: 75.46%
// Memory: 15.9 MB,Beats: 72.43%