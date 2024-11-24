class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int minValue = INT_MAX;
        int negative = 0;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                sum += abs(matrix[i][j]);  // Add absolute values to sum
                minValue = min(minValue, abs(matrix[i][j]));  // Update smallest absolute value
                if (matrix[i][j] < 0) negative++;  // Count negatives
            }
        }

        // Adjust sum if negative count is odd
        if (negative % 2 != 0) {
            sum -= 2 * minValue;
        }

        return sum;
    }
};