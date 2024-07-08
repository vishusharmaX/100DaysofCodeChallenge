class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<pair<int,int>>>ans(n,vector<pair<int,int>>(m,{0,0}));

        for(int i = 0 ; i < n; i++){
            if(grid[i][0] == 'X')
                ans[i][0] ={1,0};
            else if(grid[i][0] == 'Y')
                ans[i][0] = {0,1};
        }

        for(int i = 0 ; i < n; i++){
            for(int j = 1; j < m ; j++){
                ans[i][j] = ans[i][j-1];
                if(grid[i][j] == 'X'){
                    ans[i][j] = {ans[i][j].first+1 , ans[i][j].second};
                }
                else if(grid[i][j] == 'Y'){
                    ans[i][j] = {ans[i][j].first, ans[i][j].second+1};
                }
            }
        }

        for(int i = 1;i < n;i++){
            for(int j = 0; j< m; j++){
                ans[i][j] = {ans[i][j].first + ans[i-1][j].first , ans[i][j].second + ans[i-1][j].second};
            }
        }   
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j<m ; j++){
                if(ans[i][j].first>0 && (ans[i][j].first == ans[i][j].second) )
                    cnt++;
            }
        }

        return cnt;
    }
};