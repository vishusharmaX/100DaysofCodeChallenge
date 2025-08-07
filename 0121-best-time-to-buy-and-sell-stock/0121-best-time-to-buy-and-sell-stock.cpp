class Solution {
public:
    int maxProfit(vector<int>& price) {
        int buyprice = INT_MAX;
        int maxi = 0;
        for(int i = 0; i < price.size(); i++){
            if(buyprice < price[i]){
                int profit = price[i] - buyprice;
                maxi = max(profit,maxi);
            }
            else{
                buyprice = price[i];
            }
        }

        return maxi;


    }
};