class Solution {
public:
    void dfs(int node,vector<int>& edge,vector<int>& distance,vector<bool>& visited){
        visited[node]=true;
        int neighbor=edge[node];
        if( neighbor!=-1 && visited[neighbor]==false){
            distance[neighbor]=distance[node]+1;
            dfs(neighbor,edge,distance,visited);
            
        }
    }
    
    int closestMeetingNode(vector<int>& edge, int node1, int node2) {
        int n=edge.size();
        vector<int>dist1(n,0),dist2(n,0);
        vector<bool>vis1(n,false),vis2(n,false);
        int ans=-1;
        int mx=INT_MAX;
        dfs(node1,edge,dist1,vis1);
        dfs(node2,edge,dist2,vis2);
        for(int i=0;i<n;++i){
            if(vis1[i]==true && vis2[i]==true && mx>max(dist1[i],dist2[i])){
                mx=max(dist1[i],dist2[i]);
                ans=i;
            }
        }
        return ans;
        
    }
};