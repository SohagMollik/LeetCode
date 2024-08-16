class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        
        vector<pair<int,int>>min_element;
        vector<pair<int,int>>max_element;
        
        for(int i=0; i<arr.size(); ++i){
            
            int sz=arr[i].size();
            min_element.push_back({arr[i][0], i});
            max_element.push_back({arr[i][sz-1], i});
          
        }
        
        sort(min_element.begin(), min_element.end());
        sort(max_element.begin(), max_element.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first > b.first;
        });
        
        int min_first_element = min_element[0].first;
        int min_first_index = min_element[0].second;
        int min_second_element = min_element[1].first;
        int min_second_index = min_element[1].second;
        
        int max_first_element = max_element[0].first;
        int max_first_index = max_element[0].second;
        int max_second_element = max_element[1].first;
        int max_second_index = max_element[1].second;
        
        if(min_first_index != max_first_index){
            
        int a = abs(min_first_element - max_first_element);
        int b = abs(max_first_element - min_first_element);
        
        return max(a,b);
            
        }
        
        else{
            
        int a = max(abs(min_first_element - max_second_element), abs(max_second_element - min_first_element));
        int b = max(abs(max_first_element - min_second_element), abs(min_second_element - max_first_element));
        int c = max(abs(min_second_element - max_second_element), abs(max_second_element - min_second_element));
            
        return max({a,b,c});
            
        }
    }
};