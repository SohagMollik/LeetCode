class Solution {
public:
    bool isPathCrossing(string path) {
        
    map<char,pair<int,int>>moves;
        moves['N']={0,1};
        moves['S']={0,-1};
        moves['E']={1,0};
        moves['W']={-1,0};
        
        unordered_set<string>visit;
        visit.insert("0,0");
        
        int x=0,y=0;
        
        for(auto c: path){
            pair<int,int>curr = moves[c];
            int dx=curr.first;
            int dy=curr.second;
            x+=dx;
            y+=dy;
            
            string hash= to_string(x)+","+to_string(y);
            if(visit.find(hash) != visit.end()){
                return 1;
            }
            
            visit.insert(hash);
        }
        
        return 0;
    }
};