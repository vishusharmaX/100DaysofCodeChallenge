						// \U0001f609\U0001f609\U0001f609\U0001f609Please upvote if it helps \U0001f609\U0001f609\U0001f609\U0001f609
class Solution {
public:
    int countOrders(int n) {
        long res = 1, mod = 1000000007;
        for(int i = 1; i <=n; ++i)
        {
	        res *= i;
            res %= mod;
            res *= (2*i-1);
            res %= mod;
        }
        return res % mod;
    }
};