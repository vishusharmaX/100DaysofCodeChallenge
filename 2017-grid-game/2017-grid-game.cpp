class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long up=0;
        for(int i=0; i<n; i++){
            up+=grid[0][i];
        }
        long long down=0;
        long long m=LONG_LONG_MAX;
        for(int i=0; i<n; i++){
            up-=grid[0][i];
            m=min(m,max(up,down));
            down+=grid[1][i];
        }
        return m;
    }
};