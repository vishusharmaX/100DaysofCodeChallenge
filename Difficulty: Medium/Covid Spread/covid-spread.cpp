// User function Template for C++

class Solution {
  public:
    bool issafe(int x , int y , vector<vector<int>>&mat){
        
        return (x >= 0 && x < mat.size()  && y >= 0 && y < mat[0].size() && mat[x][y] == 1);
        
    }
    
    int helpaterp(vector<vector<int>> mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        queue<pair<int,int>>q;
        for(int i = 0; i < r;i++){
            for(int j = 0; j< c; j++){
                if(mat[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        if(q.size() == 0)return 0;
        
        
        int times = 0;
        while(!q.empty()){
            times++;
            int size = q.size();
            while(size--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                int dirx[] = {-1, 1, 0, 0};
                int diry[] = {0, 0, -1, 1};
    
                
                for(int i = 0; i < 4; i++){
                    int newx = dirx[i]+row;
                    int newy = diry[i] +col;
                    if(issafe(newx,newy,mat)){
                        q.push({newx,newy});
                        mat[newx][newy] = 2;
                    }
                }
                
            
            }
        }
       for(int i = 0; i < r;i++){
            for(int j = 0; j< c; j++){
                if(mat[i][j] == 1){
                    return -1;
                }
            }
        }
        
        return times-1;
        
    }
};
