class Solution {
public:
    int maxProfit(vector<int>& price, int fee) {
        int buy=INT_MIN;
        int sell=0;
        for(int i=0;i<price.size();++i){
            buy=max(buy,sell-price[i]);
            sell=max(sell,buy+price[i]-fee);
        }
        return sell;
    }
};