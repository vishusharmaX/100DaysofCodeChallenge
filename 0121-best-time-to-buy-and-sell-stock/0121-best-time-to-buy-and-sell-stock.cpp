class Solution {
public:
    vector<int>solve(vector<int>arr){
        int n = arr.size();
        vector<int>narr = vector<int>(n,0);
        narr[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            narr[i] = max(arr[i] , narr[i+1]);
        }
        return narr;
    }
    int maxProfit(vector<int>& prices) {
        vector<int>rightmax = solve(prices);
        // for(int i = 0; i < rightmax.size(); i++){
        //     cout<<rightmax[i]<<endl;
        // }
        int maxi = 0;
        for(int i = 0; i < prices.size(); i++){
            maxi = max(maxi,rightmax[i] - prices[i]);
        }

        return maxi;
    }
};