class Solution {
  public:
    int maxProfit(vector<int> &arr) {
        // code here
        int prev = arr[0];
        int next = arr[0];
        int maxprofit = 0;

        for(int i = 1; i < arr.size(); i++){
            if(prev > arr[i]){
                prev = arr[i];
                next = prev;
            }
            
            next = max(next, arr[i]);
            maxprofit = max(maxprofit , next-prev);
        }
        
        return maxprofit;
    }
};
