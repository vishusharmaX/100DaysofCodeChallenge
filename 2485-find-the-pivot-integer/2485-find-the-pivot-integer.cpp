class Solution {
public:
    int pivotInteger(int n) {
        long long totalSum = (long long)n * (n + 1) / 2; 
        
        long long prefixSum = 0;
        
        for (int i = 1; i <= n; i++) {
            prefixSum += i;  
            if(totalSum == 2 * prefixSum - i)
                return i;
        }

        return -1;
    }
};
