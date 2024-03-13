class Solution {
public:
    int pivotInteger(int n) {
        long long totalSum = (long long)n * (n + 1) / 2; 
        
        long long prefixSum = 0;
        
        for (int i = 1; i <= n; i++) {
            prefixSum += i;  
            if (prefixSum * 2 == totalSum + i)
                return i;
        }
        
        return -1;
    }
};
