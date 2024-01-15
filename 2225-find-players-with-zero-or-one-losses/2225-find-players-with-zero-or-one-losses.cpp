class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>> v;
        
        map<int,int>win;
        map<int,int>loss;
       
        for(int i = 0; i < matches.size(); ++i){
            win[matches[i][0]]++;
            loss[matches[i][1]]++;
        }
       
        vector<int>temp;
        for(auto pic: win){
            int x=pic.first;
            if(loss[x]==0)temp.push_back(x);
        }
        
        v.push_back(temp); 
        temp.clear();
        
        for(auto pic: loss){
            int x=pic.second;
            int y=pic.first;
            if(x==1)temp.push_back(y);
        }
        
        v.push_back(temp);
        
        return v;
    }
};
