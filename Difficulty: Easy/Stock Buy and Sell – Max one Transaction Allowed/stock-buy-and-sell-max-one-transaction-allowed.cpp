class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int buy = prices[0];
        int profit = 0;
        
        for(int i = 1; i < prices.size(); i++){
            buy = min(buy,prices[i]);
            if(prices[i] - buy  > profit){
                profit = prices[i]-buy;
            }
        }
        
        return profit;
    }
};
