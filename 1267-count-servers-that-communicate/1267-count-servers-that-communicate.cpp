class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> rowCount(n, 0);  // To store the number of servers in each row
        vector<int> colCount(m, 0);  // To store the number of servers in each column
        
        // First pass to count servers in each row and column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    rowCount[i]++;  // Increment server count in row i
                    colCount[j]++;  // Increment server count in column j
                }
            }
        }
        
        int cnt = 0;  // To count the communicable servers
        
        // Second pass to find servers that can communicate
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    // If there's more than one server in the same row or column, it's communicable
                    if (rowCount[i] > 1 || colCount[j] > 1) {
                        cnt++;
                    }
                }
            }
        }
        
        return cnt;
    }
};
