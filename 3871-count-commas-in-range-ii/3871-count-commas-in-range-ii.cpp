class Solution {
public:
    long long countCommas(long long n) {
        
        long long  lower = 1000;
        long long  commas = 1;;
        long long res = 0;

        while(lower <= n){
            long long  upper = lower*1000-1;
            if(upper > n) upper = n;

            long long cnt = upper - lower +1;
            res += cnt*commas;

            lower = lower*1000;
            commas++;
            
        }

        return res;
    }
};