class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==0)return 0;
       else  return (floor(log2(n)) == ceil(log2(n))) ? 1 : 0;
    }
};