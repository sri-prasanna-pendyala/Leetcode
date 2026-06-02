class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[l])
                l=i;
            profit=max(profit,prices[i]-prices[l]);
        }
        return profit;
    }
};