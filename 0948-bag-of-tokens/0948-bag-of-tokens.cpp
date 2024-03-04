class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        
    
       if(token.size()==0 and power!=0)return 0;
      
      
      else{
        
      sort(token.begin(), token.end());
      
      if(power<token[0]) return 0;
        else{
      int low=0, high=token.size()-1;
      int score=0,mx=0;
        
      while(low<=high){
        
        if(power>=token[low]){
        power-=token[low];
        ++mx;
          ++low;
        }
        else{
        power+=token[high];
        --mx;
        --high;
        }
        
        score=max(score,mx);
        
      }
      
      return score;
        }
      }
    }
};