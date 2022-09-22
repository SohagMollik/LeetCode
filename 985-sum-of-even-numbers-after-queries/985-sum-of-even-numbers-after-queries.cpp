class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& num, vector<vector<int>>& q) {
        vector<int>ans;
        int sum=0;
        for(auto &x: num){
            if(x%2==0)sum+=x;
        }
        
        for(int i=0;i<q.size();++i){
            int row=q[i][0];
            int col=q[i][1];
            int y=num[col];
            if(row%2==0 && y%2==0){
                sum+=row;
                ans.push_back(sum);
                num[col]=(y+row);   
            }
            else if(row%2!=0 && y%2!=0){
                sum+=(row+y);
                ans.push_back(sum);
                num[col]=(y+row);
            }
            else if(row%2==0 && y%2!=0){
                sum+=0;
                ans.push_back(sum);
                num[col]=(row+y);
            }
            else if(row%2!=0 && y%2==0){
                sum-=y;
                ans.push_back(sum);
                num[col]=(row+y);
            }
            
        }
        return ans;
    }
};