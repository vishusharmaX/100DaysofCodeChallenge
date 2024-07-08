class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        vector<vector<int>>visited(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i = 0 ;i < n ; i++){
            for(int j = 0 ; j < m; j++){
                if(mat[i][j] == 0){
                    q.push({i,j});
                    visited[i][j] = 1;
                    ans[i][j] = 0;
                }
            }
        }

        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            int dirx[] ={-1,1,0,0};
            int diry[] ={0,0,-1,1};

            for(int k = 0; k < 4; k++){
                int newx =x + dirx[k];
                int newy =y + diry[k];
                
                if(newx >= 0 && newx <n && newy>=0 && newy < m && !visited[newx][newy]){
                    q.push({newx,newy});
                    visited[newx][newy]=1;
                    ans[newx][newy] = ans[x][y] +1;
                }
                
            }

        }
        return ans;
    }
};