class Solution {
public:
    bool solve(int n){
        if(n == 1)
            return true;
        int sum = 0;
        while(n){
            int last_dig = n % 10;
            sum += pow(last_dig,2);
            n/=10;
        }
         return solve(sum);
    }
    bool isHappy(int n) {
        if(n <= 9 && n != 1){
            return false;
        }

        return solve(n);
    }
};