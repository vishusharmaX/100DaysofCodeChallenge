class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int buyprofit = prices[0];

        for(int i = 1;  i < prices.size(); i++){
            buyprofit = min(buyprofit, prices[i]);
            maxprofit = max(maxprofit, prices[i]-buyprofit);
        }

        return maxprofit;
    }
};