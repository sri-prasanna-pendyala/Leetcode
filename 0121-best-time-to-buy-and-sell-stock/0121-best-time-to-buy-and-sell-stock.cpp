class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            l=min(l,prices[i]);
            profit=max(profit,prices[i]-l);
        }
        return profit;
    }
};