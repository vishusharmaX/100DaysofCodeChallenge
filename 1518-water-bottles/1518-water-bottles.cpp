class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans = numBottles;

        while(numBottles >=numExchange ){
           int exchanged = numBottles/numExchange;
           int extra = numBottles%numExchange;
           ans+=exchanged;
           numBottles = exchanged+extra;
        }

        return ans;
        
    }
};