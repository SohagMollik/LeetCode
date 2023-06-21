class Solution {
   static int comp(string x,string y){
        string xy = x.append(y);
        string yx = y.append(x);
        if(xy.compare(yx) > 0) return 1;
        else return 0;
    }
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();++i){
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),comp);
        if(v[0]=="0")return to_string(0);
        string ans="";
        for(auto &z: v){
            ans+=z;
        }
        return ans;
    }
};