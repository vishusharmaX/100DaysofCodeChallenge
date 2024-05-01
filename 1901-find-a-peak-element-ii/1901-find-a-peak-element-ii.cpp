#include <vector>

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                bool isPeak = true;
                
                if(i > 0 && mat[i][j] <= mat[i-1][j])
                    isPeak = false;
                
                if(i < n-1 && mat[i][j] <= mat[i+1][j])
                    isPeak = false;
                
                if(j > 0 && mat[i][j] <= mat[i][j-1])
                    isPeak = false;
                
                if(j < m-1 && mat[i][j] <= mat[i][j+1])
                    isPeak = false;
                
                if(isPeak)
                    return {i, j};
            }
        }
        
        return {};
    }
};
