class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
       vector<int>v;
        for(int i=0;i<nums1.size();++i){v.push_back(nums1[i]);}
        for(int j=0;j<nums2.size();++j){v.push_back(nums2[j]);}

        map<int,int>mp;
        for(int i=0;i<v.size();++i){
            mp[v[i]]++;
        }
        int mn=1000;
        for(auto &x: mp){
            if(x.second>=2){
              mn=min(mn, x.first);
            }
        }


        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        string a=to_string(nums1[0]);
        string b=to_string(nums2[0]);
        string c=a+b;
        string d=b+a;
        int y= stoi(c);
        int z= stoi(d);

        return min(z,min(mn,y));

    }
};
